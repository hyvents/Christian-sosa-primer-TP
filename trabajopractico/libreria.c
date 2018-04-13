
#include "libreria.h"
/** \brief FUNCION SUMA
 *
 * \param a float RECIBE VARIABLE A
 * \param b float  RECIBE VARIABLE B
 * \return float   DEVUELVE EL RESULTADO DE LA SUMA
 *
 */
float suma(float a, float b)
{

    float resultado;
    resultado=a+b;
    return resultado;


}


/** \brief  FUNCION RESTA
 *
 * \param a float RECIBE VARIABLE A
 * \param b float RECIBE VARIABLE B
 * \return float DEVUELVE EL RESULTADO DE LA RESTA
 *
 */
float resta(float a, float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}


/** \brief FUNCION DIVISION
 *
 * \param a float RECIBE VARIABLE A
 * \param b float RECIBE VARIABLE B
 * \return float DEVUELVE EL RESULTADO DE LA DIVISION
 *
 */
float division(float a,float b)
{
    float resultado;
    resultado=a/b;
    return resultado;
}

/** \brief FUNCION MULTIPLICACION
 *
 * \param a float RECIBE VARIABLE A
 * \param b float RECIBE VARIABLE B
 * \return float DEVUELVE EL RESULTADO DE LA MULTIPLICACION
 *
 */
float multiplicacion(float a,float b)
{
    float resultado;
    resultado=a*b;
    return resultado;
}


/** \brief FUNCION FACTORIAL
 *
 * \param a float RECIBE A
 * \return float DEVUELVE EL FACTORIAL DE A
 *
 */
float factorial(float a)
{
    float b;
    float fact=1;
    for (b = a; b > 1; b--)
    {
    fact = fact * b;
    }
    return fact;
}
