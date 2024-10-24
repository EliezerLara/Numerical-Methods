/*Programa que calcula las raíces de una función utilizando el método de Newton-Rephson*/

#include<stdio.h>
#include<math.h>

#define f(x) (exp(x*x)*log(x)-x*x)
#define g(x) (((exp(x*x))/x)+(2*exp(x*x)*x*log(x))-(2*x))   //g(x)=f'(x)       

int main () {
    double x0=1.0 , x, eps=1.0E-10;
    int i=0, imax=10000;


    do{
        x=x0-f(x0)/g(x0);  //definimos el método de Newton para que se utilicen las funciones ya definidas
        x0=x;
        
    i++;
    }
    while(fabs(f(x))>=eps && i<imax);

    printf("La raíz de la función es: %12.10f\n", x);
    printf("f(x)=%e\n",f(x));
    printf("Número de iteraciones: %d\n", i);

return 0;



}
