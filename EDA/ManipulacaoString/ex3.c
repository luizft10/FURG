#include <stdio.h>
void main(){
    int i=0,j=0,c=0;
    char s[50];
    char s2[50];
    printf("Digite uma palavra\n");
    scanf("%s",s);
    printf("Digite um intervalo da sua palavra \n");
    scanf("%d",&i);
    getchar();
    printf("Digite outro intervalo da sua palavra\n");
    scanf("%d",&j);
    getchar();
    s[c] = s[i];
    for(int k=i; k<j; k++){
        c=c+1; 
        s[c] = s[k+1];
    }
    s[c+1] = '\0';
    printf("A sua nova string: %s\n",s);
    c=0;

    printf("Digite uma palavra\n");
    scanf("%s",s);
    printf("Digite um intervalo da sua palavra \n");
    scanf("%d",&i);
    getchar();
    printf("Digite outro intervalo da sua palavra\n");
    scanf("%d",&j);
    getchar();
    s2[c] = s[i];
    for(int z=i; z<j; z++){
        c=c+1; 
        s2[c] = s[z+1];
        printf("%d,%d\n",z,c);
    }
    printf("A sua nova string: %s",s2);


}