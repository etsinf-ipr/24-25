#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "simula.h"
struct coords{
  int x,y;
} ;


void al_inicio(){
  struct coords base;
  sensor_t rob;
  rmb_awake(&base.x,&base.y);
  // -o roomba roomba.c simula.o -lm
} 

void comportamiento(){
  struct coords coords;
    sensor_t rob;
    //printf("inside\n ");
    if(rmb_at_base() && (rmb_battery() < 1000)){ // cargar bateria si rumba esta en la base y tiene menos de 1000
      //printf("loading\n ");
      rmb_load();
      }
    else{  
      if (rmb_battery()<150) //volver a base si tiene menos de 150 de bateria
      {
          //printf("back\n ");
          rmb_turn(-(rob.head)-atan(abs(rob.y-1)/abs(rob.x-1))); // girar el angulo obtenido del arctg de y-1/x-1
          rmb_forward();                                               // (camino mas corto) Pone su head hacia la casilla 1,1
      } 
      else{ 
        //printf("move\n ");
        if (rmb_ifr()>0){   
          
          //printf("clean\n "); 
        } 
        else{ 
          //printf("forward\n ");
          rmb_forward();
          if (rmb_bumper()){ 
            if(rob.head==0.0){
              if(rob.x==48){
                rmb_turn(M_PI_2);
                rmb_forward();
                if(rmb_bumper()){ 
                  rmb_turn(M_PI_4);
                  rmb_forward();
                  rmb_turn(M_PI_4);
                } 
              } 
              rmb_turn(M_PI_2);
            } 
            else{
              rmb_turn(M_PI_4);
              rmb_forward();
              rmb_turn(-M_PI_4);
              rmb_forward();
              rmb_turn(M_PI_4);
            } 
          }
          else if(rob.head==180.0){
            if(rob.x==1){
              rmb_turn(-M_PI_2);
              rmb_forward();
              if(rmb_bumper()){ 
                rmb_turn(-M_PI_4);
                rmb_forward();
                rmb_turn(-M_PI_4);
              }
              rmb_turn(-M_PI_2);
            } 
            else{
              rmb_turn(-M_PI_4);
              rmb_forward();
              rmb_turn(M_PI_4);
              rmb_forward();
              rmb_turn(-M_PI_4);
            } 
          } 
        }
    }  
  }
}

void al_parar(){
    printf("done\n ");
    //visualize();   
} 


int main(){
  //load_map("map.pgm");
  configure(al_inicio, comportamiento,al_parar, 10);
  run();
  return 0;
}
