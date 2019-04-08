#include <stdio.h>
void main(){
    double b,a;
    int x=0,z=0;
    double area = 0;
    double u[2];
    while (x < 2){
        printf("Escreva a base do Triângulo %d:", x);
        scanf("%lf", &b);
        printf("Escreva a altura do Triângulo %d:", x);
        scanf("%lf", &a);
        area = b*a/2;
        u[x] = area;
        printf("A área do Triângulo eh: %lf \n", area);
        x += 1;
    }
    area = 0;
    while(z < 2){
        area = u[z] + area;
        z +=1;
    }
    printf("A area total eh: %lf", area);
}