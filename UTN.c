#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"
void menu (void){
int Numero1= 0;
int Numero2=0;
int flag=0;
int flag2=0;
int flag3=0;
int Opcion;
int suma, resta, multiplicacion, factorial, factorial2;
float division2;


do{
system("cls");
printf("\t\t\t\t---------------Menu de opciones---------- \n\n");

printf("1. Ingresar 1er operando (A=x)\n2. Ingresar 2do operando (B=y)\n3. Mostrar todas las operaciones\n4. Calcular resultados\n5. Salir\n\n");

printf("\tA: %d", Numero1);
printf("\n\tB: %d", Numero2);
printf("\n");
utn_getNumero(&Opcion, "\n Ingrese una opcion entre 1/5:   ", "El numero ingresado es incorrecto", 1, 5, 1000);
switch(Opcion){
case 1:
   Numero1= getNumero("Ingrese el primer numero: \n");
   flag2=1;
   system("cls");
   break;
case 2:
     Numero2=getNumero("Ingrese segundo numero: \n");
     flag3=1;
     system("cls");
     break;
case 3:

if (flag2== 0 || flag3==0){
        printf("PRIMERO DEBE INGRESAR EL PRIMER Y EL SEGUNDO NUMERO!!!!!!");
        break;
    }
else{
    printf("Calculando....");
    suma= sumaNum(Numero1, Numero2);
    resta= restaNum(Numero1, Numero2);
    division2= divisionNum( Numero1, Numero2);
    multiplicacion= multiplicacionNum(Numero1, Numero2);
    factorial= factorialNum(Numero1);
    factorial2= factorialNum(Numero2);
    flag=1;
    printf("\n");
    system("pause");
    system("cls");
   }
break;
case 4:
if (flag==0){
        printf("Debera ingresar la opcion 3 primero");
        system("cls");
        break;
    }
else{
printf("La suma es: %d", suma);
printf("\nLa resta es: %d", resta);
if (division2==0)
{
    printf("No se puede dividir ya que el divisor es cero");
}
else
{
 printf("\nLa division es %.2f", division2);
}
printf("\nLa multiplicacion es: %d", multiplicacion);
printf("\nLa factorial de A es: %d", factorial);
printf("\nLa factorial de B es: %d", factorial2);
printf("\n");
system("pause");
system("cls");
}
}

}while(Opcion!= 5);
}
//--------------------Opcion
 int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
 {
 int ret;
 int num;
 while(reintentos>0)
 {
 printf(mensaje);
 if(scanf("%d",&num)==1)
 {
 if(num<=maximo && num>=minimo)
 break;
 }
 fflush(stdin);
 reintentos--;
 printf(mensajeError);
 }
 if(reintentos==0)
 {
 ret=-1;
 }
 else
 {
 ret=0;
 *pResultado = num;
 }
 return ret;
 }

    //--------------------Numero
    int getNumero(char* mensaje)
    {   int num;
        printf(mensaje);
        scanf("%d", &num);
        return num;
    }

    //--------------------Suma
    int sumaNum(int numero1, int numero2)
    {
    int suma=0;
    suma=numero1 + numero2;
    return suma;
    }
    //--------------------Resta
    int restaNum(int numero1, int numero2)
    {

    int resta=0;

    resta=numero1 - numero2;

    return resta;
    }

//--------------------Division
    int divisionNum(int numero1, int numero2)
    {
    float division=0;

    if (numero2==0)
    {
      return 0;
    }
    else
    {
    division= numero1/numero2;

    return division;
    }

    }

//--------------------Multiplicacion
 int multiplicacionNum(int numero1, int numero2){

int multiplicacion=0;

multiplicacion= numero1 * numero2;

 return multiplicacion;
 }

//--------------------Factorial
int factorialNum (int n)
{
int resp;

if(n==1)
return 1;
resp=n* factorialNum(n-1);
return resp;
}
