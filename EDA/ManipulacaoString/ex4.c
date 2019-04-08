#include <stdio.h>
#include <string.h>
void main(){
    char s[50],t[50];
    int k = 0;
    float c=0;

    printf("Digite a string principal:\n");
    scanf("%s",t);    
    printf("Digite a string a ser comparada:\n");
    scanf("%s",s);

    for(int i = 0; i<strlen(t);i++){
        c=0;
        for(int z = 0; z<strlen(s);z++){
            if((i+z) <= strlen(t)){
                printf("a");
                if(t[i+z] == s[z]){
                    c=c+1;
                    printf("b");
                }
                if(strlen(s)/c == 1){
                    k = k+1;
                    printf("c");
            }
            }
        }
    }
    printf("A palavra %s aparece %d vezes na palavra %s", s,k,t);
}