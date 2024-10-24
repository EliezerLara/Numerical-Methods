//Programa que encuentra las ráices de una función mediante el método de corrección Pegasus//
#include<stdio.h>
#include<math.h>

#define f(x) (14.4/((x)*(x))-1090.0*exp(-(x)/0.33)/0.33)


int main() {
    int i=0, imax=10000;
    double a, b, x, dx;
    double eps=1.0E-10;


    printf("Ingresa el extremo izquierdo del intervalo: \n");
    scanf("%lf", &a);

    printf("Ingresa el extremo derecho del intervalo: \n");
    scanf("%lf", &b);

    do{
        x=a-f(a)*(b-a)/(f(b)-f(a));

        if(fabs(f(x))<=eps){
            break;
        }

        if(f(x)*f(a)>0){
            f(b)==f(b)*f(a)/(f(a)+f(x));
        }
        
        else{
            b=a; 
        }
        
        a=x;
        
        i++;
    }
    while(fabs(f(x))>=eps && i<imax);

    printf("La raíz de la función es: %lf \n", x);
    printf("La función f(x) es: %e\n", f(x));
    printf("Número de iteraciones: %d\n", i);

}
