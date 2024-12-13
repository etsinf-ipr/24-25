#ifndef _SIMULA_H
#define _SIMULA_H

/**
 * @brief Estructura con las lecturas de los sensores en el instante actual 
 * 
 */
typedef struct sensor{
    int x, y;       ///< posición del robot en horizontal (x) y vertical (y)
    float head;     ///< dirección en la que apunta actualmente el robot
    int bumper;     ///< bumper presionado o libre (detección de obstáculos)
    int infrarred;  ///< valor del sensor de infrarrojos (detección de suciedad)
    float battery;  ///< capacidad de batería disponible
} sensor_t;

/**
 * @brief Función que ejecuta el comportamiento principal del robot.
 * 
 * El usuario debe crear unn función de perfil void func(void) que contenga el código 
 * de un ciclo del robot. Esta función la ejecuta hasta que alcanza el tiempo de simulación 
 * o cualquier otra condición de terminación.
 * 
 */
void run();


/**
 * @brief Configura el simulador
 * 
 * La función recibe los nombres de tres funciones
 * - start, que se ejecuta una sola vez para preparar el simulador
 * - beh, que define el comportamiento principal del robot (cíclico)
 * - stop, que se ejecuta uan vez al final para ejecutar las tareas de cierre. 
 * 
 * 
 */
void configure(void (*start)(), void (*beh)(), void (*stop)(), int exec_time);


/**
 * @brief Carga un mapa generado en una simulación anterior
 * 
 * La función el nombre del fichero (en fomrato pgm) que contiene
 * los obstáculos, la suciedad y la posición de la base.
 */
int load_map(char *filename);



/**
 * @brief visualiza la simulación 
 * 
 * Muestra el mapa completo del entorno, la suciedad de las casillas
 * y la posición del robot en cada momento, dejando marcas sobre la trayectoria que ha seguido.
 * Una barra de progreso indica la carga de la batería y se visializa el estado del bumper 
 * (detección de obstáculos) y del sensor de infrarrojos (deteción de suciedad)
 */

void visualize();


/**
 * @brief Activa el robot y resetea los sensores. 
 * 
 * El robot dispone de una base en la que reposa cuando está inactivo. Para activar al robot, debe ejecutarse
 * esta acción awake() cuando se encuentre en la posición de la base. La base siempre estará pegada a un muro
 * y el ángulo inicial del robot será perpendicular a él.
 * 
 * El método devuelve a través de los parámetros las coordenadas x e y de la base.
 * 
 * Esta acción no consume batería.
 * 
 * @param [out] x coordenada horizontal de la posición de la base
 * @param [out] y coordenada vertical de la posición de la base
 * @return int: 1 si el robot se ha activado con éxito, 0 en cualquier otro caso 
 */
int rmb_awake(int *x, int *y);

/**
 * @brief Acción de girar el robot un ángulo 'alpha' respecto a la otientación actual.
 * 
 * El ángulo está expresado en radianes. Puede ser un valor negativo.  
 * Esta acción consume 0,1 uds. de batería
 * 
 * @param alpha ángulo que debe girar el robot. 
 */
void rmb_turn(float alpha);

/**
 * @brief Acción de avanzar un 'paso' en la dirección en la que apunta actualmente
 * 
 * Si detecta un obstáculo, se activarán los bumpers y no se cambiará la posición. 
 * Esta acción consume 
 *  - 1 ud. de batería si se mueve recto
 *  - 1,4 uds. de batería si se mueve en diagonal
 * 
 */
void rmb_forward();

/**
 * @brief Acción de limpiar la posición actual. 
 * 
 * Elimina una unidad de suciedad. 
 * Esta acción consume 1 ud. de bateria
 * 
 */
void rmb_clean();

/**
 * @brief Acción de realizar un ciclo de carga en la batería
 * 
 * Cada ciclo de carga restaura 10 uds. de batería sin sobrepasar el máximo. Para poder ejecutar
 * esta acción, el robot debe encontrarse en la posición de la base.
 * 
 * Esta acción no consume batería
 * 
 * @return int: 1 si el ciclo de recarga se ha completado con éxito, 0 en oro caso.
 */
int rmb_load();

/**
 * @brief Consulta los valores de todos los sensores al mismo tiempo
 * 
 * @return sensor_t: Estructura con los valores acutuales de los sensores 
 */
sensor_t rmb_state();

/**
 * @brief Consulta el valor del bumper. 
 * 
 * Devuelve 1 si está pulsado (detecta obstáculo) o 0 en cualquier otro caso.
 * 
 * @return int: bumper activo (1) o inactivo (0)
 */
int rmb_bumper();

/**
 * @brief Consulta el valor del sensor de infrarrojos
 * 
 * Indica el nivel de suciedad de la posición actual, o 0 si la posición está limpia.
 * 
 * @return int: nivel de suciedad (> 0) o limpio (0)
 */
int rmb_ifr();

/**
 * @brief Consulta el nivel de batería 
 * 
 * @return float 
 */
float rmb_battery();

/**
 * @brief Consulta si el robot se encuentra en la base
 * 
 * @return int 
 */
int rmb_at_base();

#endif