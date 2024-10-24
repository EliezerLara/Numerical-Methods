//Programa que encuentra las raíces de una función mediante el método de Newton//
#include<stdio.h>
#include<math.h>

#define f(x) (x*x*x)
#define g(x) (3*(x*x))   //g(x)=f'(x)       

int main () {
    double x0=-0.5, x, eps=1.0E-10;
    int i=0, imax=6000;


    do{
        x=x0-f(x0)/g(x0);  //definimos el método de Newton para que se utilicen las funciones ya definidas
        x0=x;
        
    i++;
    }
    while(fabs(f(x))>=eps && i<imax);

    printf("La raíz de la función es: %4.2f\n", x);
    printf("f(x)=%e\n",f(x));
    printf("Número de iteraciones: %d\n", i);

return 0;



}
