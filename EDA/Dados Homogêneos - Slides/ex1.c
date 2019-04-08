#include <stdio.h>
#define TAM 3
int m[TAM][TAM];
void calcDeterminante(int m[TAM][TAM]){
    int z[3][2];
    int x[1];
    int k=0;
    int d[2];
    int det = 0;

    x[0] = 1;

    for (int i=0;i<TAM;i++){
        x[0] = 1;
        for (int c=0;c<TAM;c++){
            x[0] = m[c][k] * x[0];
            k = k+1;
            if(k>=TAM){
                k = 0;
            }
        }
        z[i][0] = x[0];
        k = k + 1;
    }
    
    k=0;
    
    for (int i=0;i<TAM;i++){
        x[0] = 1;
        for (int c=TAM-1;c>=0;c--){
            x[0] = m[c][k] * x[0];
            k = k+1;
            if(k>=TAM){
                k = 0;
            }
        }
        z[i][1] = x[0];
        k = k + 1;
    }

    d[0] = 0;
    d[1] = 0;
    
    for(int i=0;i<2;i++) {    
        for(int c=0;c<TAM;c++){
            d[i] = z[c][i] + d[i];
        }
    }
    det = d[0] - d[1];

//    printf("Det pos %d \n Det neg %d\n",d[0],d[1]);
    printf("A determinante da matriz\n");
    for(int i=0;i<TAM;i++){
        printf("[ ");
        for(int c=0;c<TAM;c++){
            printf("%d ",m[i][c]);
        }
            if(i == (TAM/2)){
                printf("]   =  %d\n", det);
            }
            else{
                printf("]\n");
            }
    }
}
void main(){
    int x=0;

    for(int z=0;z<TAM;z++){
        printf("Digite %d numeros para preencher a %dª linha:\n",TAM, z+1);
        for(int i=0;i<TAM;i++){
            printf("Digite o %d numero da %dª linha: [%d][%d]\n",i+1,z+1,z,i);
            scanf("%d",&x);
            m[z][i] = x;
        }
    }
    calcDeterminante(m);
}