/*ERICK SAUL GARCIA HERNANDEZ
EJERCICIO 4 CALCULADORA DE FUNCIONES
PRACTICA 7 27/09/24*/

#include <stdio.h>
#include <math.h>

int Resp;

int Sum (int a, int b)
{
  Resp = a + b;
  return (Resp);
}
int Rest(int a, in b)
{
    Resp = a- b;
    return(Resp);
}
int Mult(int a. int b)
{
    Resp = a * b;
    return(Resp);
}
int Div(int a, int b)
{
    Resp = a / b;
    return(Resp);
}
int Exp(int a, int b)
{
    Resp = pow(a, b);
    return(Resp);
}
int main ()
{
  int a = 0, b = 0;
  int Resp, option;
  
  printf("Dime que operación deseas realizar: \n");
  printf("1.- Suma; \n");
  printf("2.- Resta: \n");
  printf("3.- Multiplicación: \n");
  printf("4.- División; \n");
  scanf("%d", &option);

  switch(option)
    {
      default:
      Resp = 0;
      break;
      case 1:
      Resp = Sum(a, b);
      break;
      case 2:
      Resp = Rest(a, b);
      break;
      case 3:
      Resp = Mult(a, b);
      break;
      case 4:
      Resp = Div(a, b);
      break;
      case 5:
      Resp = Exp(a, b);
      break;
    }

    printf("El resultado  de la operación es: %d\n", Resp);
  return 0;
}
