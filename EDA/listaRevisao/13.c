#include <stdio.h>
#include <math.h>
void main(){
    int v[30] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,3,4,5,6,7,8,9};
    printf("Digite um valor para comparar:");
    int valor = 0, c = 0;
    scanf("%d",&valor);
    for(int i=0;i<30;i++){
        if(valor == v[i]){
            printf("Posicao: %d",i);
            c +=1;
        }
    }
    if(c == 0){
        printf("Nao foi encontrado no vetor");
    }
}