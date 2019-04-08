#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<string.h>
void main(){
    int npessoas = 0;
    printf("Digite quantas pessoas será:\n");
    scanf("%d",&npessoas);
    char nome[npessoas][10];
    char sexo[npessoas][10];
    int idade[npessoas];
    for(int i=0; i<npessoas;i++){
        printf("\nDigite o sexo da %dª pessoa\n",i+1);
        scanf("%s",sexo[i]);
        printf("\nDigite o nome da %dª pessoa\n", i+1);
        scanf("%s",nome[i]);
        printf("\nDigite a idade da %dª pessoa:\n",i+1);
        scanf("%d",&idade[i]);
    }
    for(int j=0;j<npessoas;j++){
        if(idade[j] > idade[0]){
            printf("\n%s do sexo %s tem %d anos e é mais velho que a primeira pessoa",nome[j],sexo[j],idade[j]);
        }
        if(strcmp(sexo[j],"mulher")==0){
            printf("\n%s eh mulher",nome[j]);
        }
        if(strcmp(sexo[j],"homem") == 0 && idade[j] < 21){
            printf("\n%s tem menos que 21 anos", nome[j]);
        }
    }
}