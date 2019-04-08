#include <stdio.h>
#define N 5
void leOperador(){
    struct Operador{
        char nome[30];
        int idade;
    };
    struct Operador op[N];
    for(int c=0;c<N;c++){
        printf("Digite o nome do %dº operador: ",c+1);
        scanf("%s",op[c].nome);
        getchar();
        printf("Idade de %s: ",op[c].nome);
        scanf("%d", &op[c].idade);
    }
    for(int z=0;z<N;z++){
        printf("\n%s : %d\n" , op[z].nome,op[z].idade);
    }
}

void main(){
    
    leOperador();
}