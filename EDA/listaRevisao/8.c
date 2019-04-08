#include <stdio.h>
#include <math.h>
void main(){
    int n;
    double media = 0;
    double numerador=0,divisor=0;
    printf("Quantos registros sao?\n");
    scanf("%d", &n);
    double conjunto[n];
    for(int i=1;i<=n;i++){
        printf("Digite o registro %d\n",i);
        scanf("%lf",&conjunto[i]);
        if(conjunto[i]>4){
            numerador = numerador + conjunto[i];
            divisor = divisor + 1;
        }
        media = numerador/divisor;
    }
    printf("A media eh: %lf",media);

}
