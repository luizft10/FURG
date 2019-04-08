#include <stdio.h>
#define NMATRIZ 2
#define L 3
#define C 3

int m[NMATRIZ][L][C];

void calcSoma(int m[NMATRIZ][L][C]){
    int matSoma[L][C];

    for(int j=0;j<NMATRIZ;j++){
        for(int i=0;i<L;i++){
            for(int c=0;c<C;c++){
                if(matSoma[i][c] == m[j-1][i][c]){
                    matSoma[i][c] = m[j][i][c] + matSoma[i][c];
                }
                else{
                    matSoma[i][c] = 0;
                    matSoma[i][c] = m[j][i][c] + matSoma[i][c];
                }
                //printf("matSoma: %d , matPrincipal: %d", matSoma[i][c],m[j][i][c]);
            }
        }
    }
    printf("\n------- Matriz Soma -------\n");
    for(int i=0;i<L;i++){
        printf("     [ ");
        for(int z=0;z<C;z++){
            printf("%d ",matSoma[i][z]);
        }
        printf("]\n");
    }
    printf("------------------------");

}

void calcMultiplicacao(int m[NMATRIZ][L][C]){
    int matMult[L][C];

    for(int j=0;j<NMATRIZ;j++){
        for(int i=0;i<L;i++){
            for(int c=0;c<C;c++){
                if(matMult[i][c] == m[j-1][i][c]){
                    matMult[i][c] = m[j][c][i] * matMult[i][c];
                }
                else{
                    matMult[i][c] = 1;
                    matMult[i][c] = m[j][i][c] * matMult[i][c];
                }
                //printf("matSoma: %d , matPrincipal: %d", matSoma[i][c],m[j][i][c]);
            }
        }
    }
    printf("\n------- Matriz Multiplicacao -------\n");
    for(int i=0;i<L;i++){
        printf("     [ ");
        for(int z=0;z<C;z++){
            printf("%d ",matMult[i][z]);
        }
        printf("]\n");
    }
    printf("------------------------");

}

void main(){
    int x=0;
/*     printf("\nDigite o numero de linhas das matrizes:\n");
    scanf("%d",&l);
    getchar();
    printf("Digite o numero de colunas das matrizes:\n");
    scanf("%d",&col);
    getchar();

    int m[NMATRIZ][l][col]; */
    for(int c=0;c<NMATRIZ;c++){
        printf("Digite os valores da %dª matriz\n",c+1);
        for(int z=0;z<L;z++){
            printf("Digite %d numeros para preencher a %dª linha:\n",C, z+1);
            for(int i=0;i<C;i++){
                printf("Digite o %d numero da %dª linha: [%d][%d]\n",i+1,z+1,z,i);
                scanf("%d",&x);
                m[c][z][i] = x;
            }
        }
    }
    for(int c=0;c<NMATRIZ;c++){
        printf("\n------- Matriz %d -------\n",c+1);
        for(int i=0;i<L;i++){
            printf("     [ ");
            for(int z=0;z<C;z++){
                printf("%d ",m[c][i][z]);
            }
            printf("]\n");
        }
        printf("------------------------");
    }
    calcSoma(m);
    calcMultiplicacao(m);
}