/*
 * funcionesMenu.h
 *
 *
 */

#ifndef FUNCIONESMENU_H_
#define FUNCIONESMENU_H_

/**
 * \fn void mostrarMenuPrincipal(float*, float*, float*, int*, int*, int*, int*)
 * \brief imprime el menu principal con sus opciones y muestra lo ingresado hasta el momento.
 *
 * \param hospedaje recibe un puntero e imprime lo ingresado hasta el momento
 * \param comida	recibe un puntero e imprime lo ingresado hasta el momento
 * \param transporte recibe un puntero e imprime lo ingresado hasta el momento
 * \param arqueros recibe un puntero e imprime lo ingresado hasta el momento
 * \param defensores recibe un puntero e imprime lo ingresado hasta el momento
 * \param mediocampistas recibe un puntero e imprime lo ingresado hasta el momento
 * \param delanteros recibe un puntero e imprime lo ingresado hasta el momento
 */
void mostrarMenuPrincipal(float* hospedaje,float* comida,float* transporte,int* arqueros,int* defensores,int* mediocampistas,int* delanteros);

/**
 * \fn void mostrarMenuCostosMantenimiento(float*, float*, float*)
 * \brief imprime menu con las opciones de los costos de mantenimiento a elegir y muestra lo ingresado hasta el momento.
 *
 * \param acumuladorHospedaje acumula y permite mostrar la cantidad ingresada al momento
 * \param acumuladorComida acumula y permite mostrar la cantidad ingresada al momento
 * \param acumuladorTransporte acumula y permite mostrar la cantidad ingresada al momento
 */
void mostrarMenuCostosMantenimiento(float* acumuladorHospedaje,float* acumuladorComida,float* acumuladorTransporte);

/**
 * \fn void mostrarMenuPosicionJugadores(int*, int*, int*, int*)
 * \brief Imprime menu con las posiciones de jugadores y muestra la cantidad ingresada hasta el momento
 *
 * \param contadorArqueros incrementa y permite mostrar la cantidad ingresada al momento
 * \param contadorDefensores incrementa y permite mostrar la cantidad ingresada al momento
 * \param contadorMediocampistas incrementa y permite mostrar la cantidad ingresada al momento
 * \param contadorDelanteros incrementa y permite mostrar la cantidad ingresada al momento
 */
void mostrarMenuPosicionJugadores(int* contadorArqueros,int* contadorDefensores,int* contadorMediocampistas,int* contadorDelanteros);

/**
 * \fn void mostrarMenuConfederaciones()
 * \brief imprime el menu de confederaciones.
 *
 */
void mostrarMenuConfederaciones();

/**
 * \fn void opcionesMenuConfederaciones(int*, int*, int*, int*, int*, int*, int*)
 * \brief incrementa los contadores segun la opcion elegida del menu de confederaciones.
 *
 * \param opcionConfederacion recibe un puntero de la opcion elegida
 * \param contadorAFC incrementa el valor
 * \param contadorCAF incrementa el valor
 * \param contadorCONCACAF incrementa el valor
 * \param contadorCONMEBOL incrementa el valor
 * \param contadorUEFA incrementa el valor
 * \param contadorOFC incrementa el valor
 */
void opcionesMenuConfederaciones(int* opcionConfederacion, int* contadorAFC, int* contadorCAF, int* contadorCONCACAF,int* contadorCONMEBOL, int* contadorUEFA, int* contadorOFC);

/**
 * \fn void calcularPromedio(float*, int*, int*)
 * \brief Realiza el calculo de promedio.
 *
 * \param resultado recibe un puntero en el que se le asigna el resultado del calculo.
 * \param numeroUno numero con el cual realiza el calculo.
 * \param numeroDos segundo numero con el cual realiza el calculo
 */
void calcularPromedio(float* resultado, int* numeroUno,int* numeroDos);

#endif /* FUNCIONESMENU_H_ */
