#include<stdio.h>
#include<math.h>

#define f(x) (exp(x)-exp(1))

int main () {

double eps=1.0E-11, a, b, x, c, r;
int i=0, imax=10000;

    printf("Ingrese el extremo izquierdo del intervalo:\n");
    scanf("%lf", &a);

    printf("Ingrese el extremo derecho del intervalo:\n");
    scanf("%lf", &b);

    do{

        x=(a+b)/2;
        c=a-f(a)*((b-a)/(f(b)-f(a)));

        if(fabs(f(x))<fabs(f(c))){
            r=x;
            if(f(a)*f(r)<0){
                b=r;
            }
            else{
                a=r;
            }
        }


        else{  
            r=c;
            if(f(a)*f(r)<0){
                b=r;
            }
            else{
                a=r;
            }

        }
    i++;
    }
    while(fabs(f(x))>=eps && i<imax);


    printf("La raíz de la función es: %lf\n", r);
    printf("f(x)=%e\n",f(r));
    printf("Número de iteraciones: %d\n", i);


return 0; 

}