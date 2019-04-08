#include <stdio.h>
#define TAM 2
int vet[TAM];

void leVet(int *vet){
    int k = 0;
    for(int i=0;i<TAM;i++){
        printf("Digite os valores:\n");
        scanf("%d", &k);
        getchar();
        vet[i] = k;
    }
}
int calcMaior(int *vet){
    int maior = 0;
    for(int i=0; i<TAM;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}
float calcMedia(){
    float media = 0,c=0;
    for(int i=0; i<TAM;i++){
        media = vet[i] + media;
        c = c + 1;
    }
    media = media/c;
    return media;
}
void imprime(int *vet){
    for(int i=0;i<TAM;i++){
        printf("[%d]:%d\n",i,vet[i]);
    }
}
void troca(int *vet, int x,int y){
    for(int i=0; i<TAM; i++){
        if(vet[i] == x){
            vet[i] = y;
        }
        else if (vet[i] == y){
            vet[i] = x;
        }
    }
}


void main(){
    int maior = 0,x=0,y=0;
    float media = 0;
    leVet(vet);
    maior = calcMaior(vet);
    printf("O valor maior dentro do vetor: %d\n",maior);
    media = calcMedia(vet);
    printf("A media dentro do vetor: %lf\n",media);
    imprime(vet);
    printf("Digite dois valores a serem trocados:\n");
    printf("Primeiro:\n");
    scanf("%d",&x);
    printf("Segundo:\n");
    scanf("%d",&y); 
    troca(vet,x,y);
    imprime(vet);
}