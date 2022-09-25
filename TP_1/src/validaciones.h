/*
 * validaciones.h
 *
 *  Prototipos
 *
 */

#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_


/**
 * \fn int utn_getSoloNumero(int*, char*, char*, int, int, int)
 * \brief Valida la entrada de un numero entero, no letras.
 *
 * \param pResultado Recibe un puntero en el que se le asigna el numero valido.
 * \param mensaje imprime un mensaje
 * \param mensajeError imprime un mensaje de error
 * \param minimo rango minimo a ingresar
 * \param maximo rango maximo a ingresar
 * \param reintentos
 * \return retorna 0 si la funcion realizo correctamente la tarea, -1 si no funciona
 */
int utn_getSoloNumero(int* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo, int reintentos);

/**
 * \fn int utn_getSoloNumeroFlotante(float*, char*, char*, int)
 * \brief Valida la entrada de un numero flotante, no letras.
 *
 * \param pResultado Recibe un puntero en el que se le asigna el numero valido.
 * \param mensaje imprime un mensaje
 * \param mensajeError imprime un mensaje de error
 * \param minimo rango minimo a ingresar
 * \return retorna 0 si sale bien, -1 si no funciona.
 */
int utn_getSoloNumeroFlotante(float* pResultado, char* mensaje,char* mensajeError,int minimo);

#endif /* VALIDACIONES_H_ */

