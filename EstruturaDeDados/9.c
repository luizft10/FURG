#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define NCARRO 2
void main(){
    char modelo[NCARRO][20];
    int ano[NCARRO];
    char cor[NCARRO][20];
    char placa[NCARRO][6];
    double pcor=0,pano=0,pmod=0,pplaca=0;
    int c = 0,length=0, count = 0;

    for(int i =0; i <=NCARRO-1; i++){
        printf("Digite as informacoes do %dº Carro\n",i+1);
        for(int t=1;t<=4;t++){
            switch(t){
                case 1:
                    printf("Modelo(Ex.:FIAT UNO):\n");
                    scanf("%[^\n]%*c",modelo[i]);
                    int z = 0;
                    if(modelo[i][z] == 'F'){
                        z += 1;
                    }
                    if(modelo[i][z] == 'I'){
                        z += 1;
                    }                       
                    if(modelo[i][z] == 'A'){
                        z += 1;
                    }
                    if(modelo[i][z] == 'T'){
                        z += 1;
                    }
                    if(modelo[i][z] == 32){
                        z += 1;
                    }
                    if(modelo[i][z] == 'U'){
                        z += 1;
                    }if(modelo[i][z] == 'N'){
                        z += 1;
                    }if(modelo[i][z] == 'O'){
                        z += 1;                                                            
                    }
                    if(modelo[i][z] == '\0'){
                        pmod += 1;                                                         
                    }
                    
                    //printf("%s",modelo[i]);
                break;
                case 2:
                    printf("Ano:\n");
                    scanf("%d",&ano[i]);
                    if(ano[i]< 1990){
                        pano += 1;
                    }
                break;
                case 3:
                    printf("Cor:\n");
                    scanf("%s",cor[i]);
                    getchar();
                    int v = 0;
                    if(cor[i][v] == 'v'){
                        v += 1;
                    }
                    if(cor[i][v] == 'e'){
                        v += 1;
                    }
                    if(cor[i][v] == 'r'){
                        v += 1;
                    }
                    if(cor[i][v] == 'd'){
                        v += 1;
                    }
                    if(cor[i][v] == 'e'){
                        v += 1;
                    }
                    if(cor[i][v] == '\0'){
                        pcor += 1;                                                         
                    }
                break;
                case 4:
                    printf("Placa (Ex.:AB1234):\n");
                    scanf("%s",placa[i]);
                    for(int t=0;t<6;t++){
                        if(placa[i][t]=='5'){
                            c +=1;
                        }
                    }
                    if(c >= 1){
                        pplaca += 1;
                    }
                    getchar();
                    break;
            }
        }   
    }
    printf("\n%lf Tem cor verde e o percentual eh: %lf porcento",pcor,((pcor*100)/NCARRO));
    printf("\n%lf Foram fabricados antes de 1990 e o percentual eh: %lf porcento",pano,((pano*100)/NCARRO));
    printf("\n%lf Sao FIAT UNO e o percentual eh: %lf porcento",pmod,((pmod*100)/NCARRO));
    printf("\n%lf Tem 5 na placa e o percentual eh: %lf porcento",pplaca,((pplaca*100)/NCARRO));
}