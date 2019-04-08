#include <stdio.h>
void main(){
    int p=0,s=0;
    while (p < 1000){
        s = s + p;
        p = p + 2;
    }
    printf("O somatorio eh:%d",s);

}