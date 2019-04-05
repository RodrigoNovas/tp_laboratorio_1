#include <stdio.h>
#include <stdlib.h>
/** \brief Ingresa un numero con validacion de maximo y minimo con reintentos
 *
 * \param puntero numero
 * \param cadena mensaje
 * \param mensaje error
 * \param minimo
 * \param maximo
 * \param reintentos
 * \return -1 si la cantidad de reintentos es 0, y cero si la cantidad si no lo es.
 *
 */

int utn_getNumero(int* ,char* ,char* ,int ,int ,int );
/** \brief Entra numero con mensaje sin maximo ni minimo
 * \param mensaje
 * \return numero
 */
int getNumero(char*);
/** \brief Suma de dos numeros
 * \param numero1
 * \param  numero2
 * \return Suma
 */
int sumaNum(int , int);
/** \brief Resta de dos numeros
 * \param numero1
 * \param  numero2
 * \return Resta
 *
 */
int restaNum(int , int );
/** \brief Division de dos numeros
 * \param  numero1
 * \param  numero2
 * \return O si el divisor es cero y numero de division sino si la division es correcta
 *
 */
int divisionNum(int , int);
/** \brief Multiplicacion
 * \param numero1
 * \param numero2
 * \return Multiplicacion
 *
 */
int multiplicacionNum(int , int );
/** \brief Funcion recursiva
 * \param numero1 / numero2
 * \return Factorial
 */
int factorialNum (int);
