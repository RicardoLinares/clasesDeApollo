#include <stdio.h>
#include <stdlib.h>


#ifndef LISTANUMEROS_H_INCLUDED
#define LISTANUMEROS_H_INCLUDED

int acederVectorialTrabajoVectorial(int[], int);
/** \brief Recibe el array como vector y accede a los datos utilizando notación vectorial ([])
 *
 * \param int[] lista de numeros
 * \param int tamaño del array
 * \return -1 ERROR 0 OK
 *
 */

 /** \brief Recibe el array como vector y accede a los datos utilizando aritmetica de punteros
 *
 * \param int[] lista de numeros
 * \param int tamaño del array
 * \return -1 ERROR 0 OK
 *
 */
int acederVectorialTrabajoArimetica(int[], int);

/** \brief Recibe el array como puntero y accede a los datos utilizando notación vectorial ([])
 *
 * \param int* lista de numeros
 * \param int tamaño del array
 * \return -1 ERROR 0 OK
 *
 */
int acederPunteroTrabajoVectorial(int*, int);

/** \brief  Recibe el array como puntero y accede a los datos utilizando aritmetica de punteros
 *
 * \param int* lista de numeros
 * \param int tamaño del array
 * \return -1 ERROR 0 OK
 *
 */
int acederPunteroTrabajoArimatica(int*, int);


#endif // LISTANUMEROS_H_INCLUDED
