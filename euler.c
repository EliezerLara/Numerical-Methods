/*Programa que hace el método de Euler y genera un archivo para graficarlo*/

#include<stdio.h>
#include<math.h>

int main () {
    int j;
    float Dt=0.1, x[65], v[65];  //definimos nuestros arreglos, tenemos que poner el número dentro de los corchetes y que sea mayor que el número hasta el que vamos a iterar

    x[0]=1;     //condiciones iniciales
    v[0]=0;     //para ambas variables    


    FILE*arch=fopen("euler.txt","w"); //abrimos el archivo donde se van a guardar los datos

        for(j=0;j<=65;j++){
            
    
            x[j+1]=x[j]+(v[j]*Dt);                      //fórmulas de recurrencia 
            v[j+1]=(v[j]*(1-(Dt*Dt)))-(x[j]*Dt);        //primer ciclo que genera los valores usando las fórmulas
            
            

        }
    
        for(j=0;j<=65;j++){
            fprintf(arch, "%lf %lf\n", x[j], v[j]);     //segundo ciclo que imprime los datos en el archivo
                                                        // lo podemos poner dentro del primer ciclo
        }
    fclose(arch); // cerramos el archivo 



return 0;

}

/* revisamos en gnuplot utilizando plot "euler.txt" w p 
    para que nos grafique todos los puntos en una gráfica sólo con puntos */