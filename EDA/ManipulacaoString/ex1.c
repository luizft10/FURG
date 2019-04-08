#include <stdio.h>
#include <string.h>
void main()
{
    char palavra[50];
    char letra;
    int pos = 0,a = 0;
    printf("Digite uma string:\n");
    scanf("%s",palavra);
    printf("Agora digite uma letra a ser comparada:\n");
    getchar();
    scanf("%c",&letra);
    pos = strchr(palavra,letra) - palavra;
    if(pos<=strlen(palavra)){
        printf("\nA posicao eh: %d", pos+1);
    }
    else{
        printf("Nao existe");
    }
    printf("\nDigite uma posicao para começar a procurar %c\n",letra);
    scanf("%d",&a);
    pos = strchr(palavra+a,letra) - palavra;
    if(pos<=strlen(palavra)){
        printf("\nA posicao a partir de %d eh: %d",a, pos+1);
    }
    else{
        printf("Nao existe");
    }   
}
