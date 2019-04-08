#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int primo = 0;
    int resto = 0;
    int divisao = 0;
    int divj =  0;
    int u = 0;
    int z = 0;
    for(int i = 1;i<1000;i++){
        u=0;
        for(int j=1;j<=i;j++){
            //printf("i = %d\n",i);
            //printf("j = %d\n",j);
            divisao = (i/j);
            divj = divisao * j;
            resto = i - (divj);
            //printf("RESTO:\n%d",resto);
            if(resto == 0){
                u = u+1;
            }
        }
        if(u == 2){
            primo += 1;
        }
    }
    int nprimo[primo];   
        for(int i = 1;i<1000;i++){
        u=0;
        for(int j=1;j<=i;j++){
            //printf("i = %d\n",i);
            //printf("j = %d\n",j);
            divisao = (i/j);
            divj = divisao * j;
            resto = i - (divj);
            //printf("RESTO:\n%d",resto);
            if(resto == 0){
                u = u+1;
            }
        }
        if(u == 2){
            nprimo[z] = i;
            z += 1;
        }
    }
    for(int k=0;k<primo;k++){
        printf("\nPrimo:\n%d",nprimo[k]);
    }
}