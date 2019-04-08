#include <stdio.h>
#include <string.h>
void main()
{
    char palavra[50];
    char palavra2[10];
    int pos = 0,a = 0;
    printf("Digite uma string:\n");
    scanf("%s",palavra);
    printf("Agora digite algo a ser comparado:\n");
    getchar();
    scanf("%s",palavra2);
    pos = strstr(palavra,palavra2) - palavra;
    if(pos<=strlen(palavra)){
        printf("\nA posicao esta entre: %d e %ld", pos+1,strlen(palavra2)+pos);
    }
    else{
        printf("Nao existe");
    }
}