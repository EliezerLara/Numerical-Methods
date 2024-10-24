/*Programa que encuentra la raíz de la función en un intervalo ingresado por el usuario mediante el método de Regula Falsi*/

#include<stdio.h>
#include<math.h>

#define f(x) (-1090.0*exp(-(x)/0.33)/0.33+14.4/(x*x))          // Ingresamos la función a la que le queremos encontrar la raíz

int main () {

    double a, b, eps=1.0E-10 ; // variables para la fórmula de Regula Falsi y del condicional
    int i=0, imax=10000;  // variables del loop
    double x, fx=f(x), fa = f(a), fb = f(b); // Definimos las funciones de una manera más sencilla para simplificar la escritura 

    
    printf("Ingresa el valor de a:\n");  // Ingresamos el valor de un extremo del intervalo
    scanf("%lf", &a);

    printf("Ingresa el valor de b:\n");  // Ingresamos el otro extremo del intervalo
    scanf("%lf", &b);

    do{
    
       x=a-f(a)*((b-a)/(f(b)-f(a)));

        if(fa*fx<0){

            b=x;
            fb=fx;
        }
        else{

            a=x;
            fa=fx;

        }

    i++;
    }
    while(fabs(f(x))>=eps && i<imax);
    

    printf("La raíz de la función es: %lf\n", x); 
    printf("La función f(x) es: %e\n", f(x));
    printf("Número de iteraciones: %d\n", i);


    return 0;
}
