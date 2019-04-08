#include <stdio.h>
#include <math.h>
void main(){
    char w[70];
    int length=0;
    printf("Escreva uma palavra:\n");
    scanf("%s",w);
    getchar();
    for(int i=0;i<=70;i++){
        if(w[i] == '$'){
            length = i+1;
            //printf("length: %d",length);
        }
    }
    char iw[length];
    iw[length] = '\0';
    for(int i=0;i<=length-1;i++){
        iw[length - i - 1] = w[i];
        //printf("\n Length %d, caracter %c  ", (length - i - 1),w[i] );
    }
    printf("\n Nova string:\n%s",iw);


}