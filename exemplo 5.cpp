#include <stdio.h>
#include <conio.h>
#include <math.h>

main ()
{

float a,b,resultado;
char operador;


printf("\n Digite o primeiro numero:");
scanf ("%f",&a);
printf("\n Digite o segundo numero:");
scanf ("%f",&b);
printf("\n Digite um operador matematico:");
scanf ("%s",&operador);

getch();
if (operador=='+') {
resultado=a+b;    
printf ("\n O resultado e: %f",resultado);


}  

else
if (operador=='-') {
resultado=a-b;
printf ("\n O resultado e: %f",resultado);

}

else
if (operador=='/') {
resultado=a/b;
printf ("\n O resultado e: %f",resultado);

}

else  
if (operador=='*') {
resultado=a*b;
printf ("\n O resultado e: %f",resultado);


}
getch();

}
