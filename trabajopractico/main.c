#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"



int main()
{
    /**< DECLARO TODAS LAS VARIABLES QUE SE UTILIZARAN EN EL PROGRAMA */
    char seguir='s';
    int opcion;
    int flag=0;
    int flag2=0;
    int flag3=0;
    int flag4=0;
    int flag5=0;
    float a;
    float b;
    float resultado,resultado2,resultado3,resultado4,resultado5;

    while(seguir=='s')
    {

        /**< DETECTA SI SE INGRESO EL NUMERO POR PRIMERA VEZ, PARA MOSTRARLO EN EL MENU */
        if(flag==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (%0.2f =x)\n",a);
        }
        /**< DETECTA SI SE INGRESO EL NUMERO POR PRIMERA VEZ, PARA MOSTRARLO EN EL MENU */
        if(flag2==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (%0.2f=y)\n",b);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        if(opcion>9 || opcion<1)
        {
            printf("Error, ingrese un numero entre 1 y 9\n");
        }

        switch(opcion)
        {
            case 1:
                /**< INGRESA LA VARIABLE A Y PONE LA BANDERA EN 1 PARA MOSTRARLO EN EL MENU */
                printf("Ingresar el primer operando\n");
                scanf("%f",&a);
                flag=1;
                break;
            case 2:
                /**< INGRESA LA VARIABLE B Y PONE LA BANDERA EN 1 PARA MOSTRARLO EN EL MENU */
                printf("Ingresar el segundo operando\n");
                scanf("%f",&b);
                flag2=1;
                break;
            case 3:
                if(flag==0 && flag2==0)
                {
                    system("cls");
                    printf("No hay elementos para sumar\n");
                }
                else
                {
                /**< LLAMA A LA FUNCION Y LE ENVIA LA VARIABLE A Y B */
                resultado=suma(a, b);
                flag3=1;
                }
                break;
            case 4:
                if(flag==0 && flag2==0)
                {
                    system("cls");
                    printf("No hay elementos para restar\n");
                }
                else if(b<0 &&flag==0)
                {
                    resultado=b*(-1);
                }
                else
                {
                 /**< LLAMA A LA FUNCION Y LE ENVIA LA VARIABLE A Y B */
                resultado=resta(a,b);
                flag3=1;
                }
                break;
            case 5:
                /**< DETECTA SI SE INGRESO OPERANDO B */
                if(flag2==0)
                {
                     /**< SI NO SE INGRESO B DEVUELVE EL TEXTO*/
                    system("cls");
                    printf("El operando B es 0, no se puede realizar la division\n");
                }
                else
                {
                    /**< SI SE INGRESO B, LLAMA A LA FUNCION Y ENVIA VARIABLE A Y B */
                    resultado=division(a,b);
                    flag3=1;
                }

                break;
            case 6:
                if(flag==0 && flag2==0)
                {
                    system("cls");
                    printf("No hay elementos para multiplicar\n");
                }
                else
                {
                /**< LLAMA A LA FUNCION Y ENVIA VARIABLE A Y B */
                resultado=multiplicacion(a,b);
                flag3=1;
                }
                break;
            case 7:
                if(flag==0)
                {
                    system("cls");
                    printf("No ingresaste la variable A\n");
                }
                else if(a<0)
                {
                    system("cls");
                    printf("No se puede hacer el factorial de un numero negativo");
                }
                else
                {
                /**< LLAMA A LA FUNCION Y ENVIA LA VARIABLE A */
                resultado=factorial(a);
                flag3=1;
                }
                break;
            case 8:
                if(flag==0 && flag2==0)
                {
                    system("cls");
                    printf("No hay elementos para realizar las operaciones \n");
                }
                else
                {
                /**< LLAMA A TODAS LAS FUNCIONES Y ENVIA A Y B SEGUN CORRESPONDA  */
                resultado=suma(a,b);
                resultado2=resta(a,b);
                if(flag2==0)/**< DETECTA SI NO SE INGRESO B Y PONE LA BANDERA EN 1 PARA DESPUES MOSTRAR EL TEXTO */
                {
                    flag4=1;
                }
                else
                {
                    resultado3=division(a,b);
                }
                resultado4=multiplicacion(a,b);
                resultado5=factorial(a);
                /**< BANDERA 5 EN 1 PARA DIFERENCIAR A LA HORA DE MOSTRAR RESULTADOS */
                flag5=1;
                }

                break;
            case 9:
                seguir = 'n';
                break;
        }
        /**< DETECTA SI LA BANDERA 3 ESTA EN 1 PARA MOSTRAR O PASAR AL ELSE IF Y MOSTRAR TODOS LOS DEMAS RESULTADOS */

        if(flag3==1)
        {
            system("cls");
            printf("El resultado de la cuenta es %0.2f  \n\n\n\n\n",resultado);

        }
        else if(flag5==1)
        {
            system("cls");
            printf("El resultado de la suma es :%0.2f\n",resultado);
            printf("El resultado de la resta es :%0.2f\n",resultado2);
            if(flag4==1)
            {
                printf("Imposible de devidir ya que B es 0\n");
            }
            else
            {
                printf("El resultado de la division es :%0.2f\n",resultado3);
            }
            printf("El resultado de la multiplicacion es :%0.2f\n",resultado4);
            printf("El resultado del factorial es:%0.2f\n",resultado5);
        }
        /**< PONE LAS BANDERAS DEVUELTA EN 0 PARA VOLVER A ARRANCAR  */
        flag5=0;
        flag3=0;




    }
return 0;
}


