#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "simula.h"

struct coor{
  int x, y;
};


void on_start(){
  struct coor base;
  sensor_t rob;
  float desv;
  rmb_awake(&base.x, &base.y);
  //random heading in a 180º arc
  /*
  rob = rmb_state();
  desv = rand()  / (float)RAND_MAX * M_PI - M_PI_2; 
  rmb_turn(rob.head + desv);
  */
}


void cyclic_behav(){
  float angle;
  //da un paso en la dirección actual
  rmb_forward();
  sensor_t rob = rmb_state();
  printf("(%d, %d) -> ", rob.y, rob.x);
  //detección de obstáculos
  if(rmb_bumper()){
    //gira un ángulo aleatorio
    angle = rand() / (float)RAND_MAX * 2 * M_PI; 
    rmb_turn(angle);
  }
  //deteccion de suciedad
  while(rmb_ifr() > 0)
    rmb_clean();
  //carga si se encuentra en la base
  if(rmb_at_base())
    while(rmb_battery() < 250)
      rmb_load();
}


void on_stop(){
  printf("\n");
  visualize();
}


int main(int argc, char *argv[]){
  if(argc > 1)
    load_map(argv[1]);
  configure(on_start, cyclic_behav, on_stop, 100);
  run();
  return 0;
}
