#include <stdio.h>
#include <math.h>
void main(){
    int v = 3,x=1;
    double pg=0,s=0;
    while (x <=30){
        pg = (pow(v,x));
        s = pg + s;
        x += 1;
    } 
    printf("O valor do 30o termo eh: %lf", pg);
    printf("\nA soma de todos os termos eh: %lf",s);

}