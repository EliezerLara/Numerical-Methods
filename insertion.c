//Programa que ordena un conjunto dado mediante el método de inserción (insertion sort)//

#include<stdio.h>
#include<math.h>

int main (){

    int x[7]={5,1,3,2,4,6}, a;
    int i,j;

    for(i=0;i<=5;i++){

        j=i;

        while(j>0){

            if(x[j]<x[j-1]){

                a=x[j];
                x[j]=x[j-1];
                x[j-1]=a;

            }
            else{
                break;
            }

        j--;
        }

    

    }

    for(i=0;i<=5;i++){
        
        printf("%d ", x[i]);
    
    }

    printf("\n");

    return 0;
}
