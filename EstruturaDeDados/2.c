#include <stdio.h>
void main(){
    int x = 0,y=0;
    printf("Escreva um valor: ");
    scanf ("%d", &x);
    for(int i=1; i<=100;i++){
        y = x + i + y;
        printf("\nO somatorio eh: %d",y);
    }
    printf("\nO somatorio eh: %d",y);
}