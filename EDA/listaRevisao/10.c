#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void delay(unsigned int milliseconds){

    clock_t start = clock();

    while((clock() - start) * 1000 / CLOCKS_PER_SEC < milliseconds);
}
int cronometro(int *arrayp){

    int horas=arrayp[0],minutos=arrayp[1],segundos=arrayp[2];
    printf("Voltou");
    while(segundos <= 59){
        delay(10);
        printf("\nHoras: %d Minutos: %d Segundos: %d",horas,minutos,segundos);
        segundos = segundos + 1;
        if(minutos == 60){
            minutos = 0;
            horas += 1;
        }
        if(horas == 25){
            horas = 0;
        }
    }
    if(segundos == 60){
        minutos = minutos + 1;
        segundos = 0;
    }   
    //printf("minutos:%d",minutos);
        arrayp[0] = horas;
        arrayp[1] = minutos;
        arrayp[2] = segundos;
        //printf("\nTESTE1 Horas: %d Minutos: %d Segundos: %d",arrayp[0],arrayp[1],arrayp[2]);
        return 0;
}
int main(){
    int array[3] = {0,0,0};
    int* arrayp;
    arrayp = &array[0];
    int message=0,stop=4,sair=0,start=0;
    while(start == 0){
        printf("Para cronometrar digite 1\n");
        scanf("%d", &start);
    }
    while(start == 1){
        cronometro(arrayp);
        int horas=arrayp[0],minutos=arrayp[1],segundos=arrayp[2];
        while(message != minutos){    
            printf("\nPara parar digite 1");
            printf("\nPara sair digite 2");
            scanf("%d",&stop);
            switch(stop){
                case 1:
                    printf("\nDigite 2 para continuar");
                    printf("\nHoras: %d Minutos: %d Segundos: %d",horas,minutos,segundos);
                    scanf("%d",&stop);
                break;
                case 2:
                    return 0;
                break;
                case 3:
                    start = 0;
                break;   
                case 4:
                    cronometro(arrayp);
                break;
            }
            message = minutos;
        }
    }
}
