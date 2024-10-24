/*Programa que encuentra la raíz de la función en un intervalo ingresado por el usuario mediante el método de la interpolación*/

#include<stdio.h>
#include<math.h>

#define f(x) (atan(x))          // Ingresamos la función a la que le queremos encontrar la raíz
#define g(x) (1/(1+(x*x)))      // Derivada de la función (en este caso no se utiliza pues es el método de la secante NO el de Newton-Raphson)

int main () {

    double a, b, eps=1.0E-10 ; // variables para la fórmula de la interpolación y del condicional
    int i=0, imax=10000;  // variables del loop
    double x, fx=f(x), fa = f(a), fb = f(b); // Definimos las funciones de una manera más sencilla para simplificar la forma de escribirlas más adelante 

    
    printf("Ingresa el valor de a:\n");  // Ingresamos el valor de un extremo del intervalo
    scanf("%lf", &a);

    printf("Ingresa el valor de b:\n");  // Ingresamos el otro extremo del intervalo
    scanf("%lf", &b);

    do{
    
        x = b-(f(b)*((b-a)/(f(b)-f(a))));  //Fórmula de la interpolación utilizando el método de la secante

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
    

    printf("La raíz de la función es: %6.3f\n", x); 
    printf("La función f(x) es: %e\n", f(x));
    printf("Número de iteraciones: %d\n", i);


    return 0;
}