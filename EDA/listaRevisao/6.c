#include <stdio.h>
#include <math.h>
void main(){

    char w[10] = "Aleluiaaaa";
    char iw[10];
    for(int i=1;i<=10;i++){
        iw[10]='\0';
        iw[10 - i] = w[i-1];
    }
    for(int i=0;i<=9;i++){
        printf("%c\n",iw[i]);
    }

}