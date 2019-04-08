#include <stdio.h>
int vagas[10] = {1,2,3,4,5,6,7,8,9,10};
int candidatos[10] = {2,4,6,8,10,12,14,16,45,20};
int candpv[10];
lerVagas(int curso[10]){
    for(int i=0;i<10;i++){
        curso[i] = vagas[i];
    }
}
lerCandidatos(int curso[10]){
    for(int i=0; i<10;i++){
        curso[i] = candidatos[i];
    }
}
criarVetor(int candpvaga[10]){
    int cand=0;
    int vaga=0;
    for(int i=0;i<10;i++){
        cand = candidatos[i];
        vaga = vagas[i];
        candpvaga[i] = cand/vaga;
    }
}
retornaCandpvaga(int i){
    int candpvaga[10];
    criarVetor(&candpvaga);
    printf("\n%d",candpvaga[i]);
}
int maiorConcorrencia(){
    int candpvaga[10];
    criarVetor(&candpvaga);
    int maior=0;
    int indice=0;
    for(int i=0;i<10;i++){
        if(maior>=candpvaga[i]){
        }else{
            maior = candpvaga[i];
            indice = i;
        }
    }
    return indice;
}

void main(){
    int c[10];
    lerVagas(&c);
    for(int i=0;i<10;i++){
        printf ("%d",c[i]) ;
    }
    lerCandidatos(&c);
        for(int i=0;i<10;i++){
        printf ("%d",c[i]) ;
    }
    int candpvaga[10];
    criarVetor(&candpvaga);
    for(int i=0;i<10;i++){
        printf ("%d",candpvaga[i]);
    }
    retornaCandpvaga(8);
    int indice = maiorConcorrencia();
    printf("\n%d", indice);
}