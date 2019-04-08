#include <stdio.h>
#include <math.h>


void main(){
    double s=0,sum=0,i=0;
    for(int t=0;t < 50; t++){
        if((t+1)%2==0){
            i = 1000 - 3*t;
            s = i/(t+1);
            sum = -s + sum;
            //printf("IF 1:Termo %d:%lf/%d\n",(t+1),i,(t+1));
        }
        if((t+1)%2!=0){
            i = 1000 - 3*t;
            s = i/(t+1);
            sum = s + sum;
            //printf("IF 2: Termo %d:%lf/%d\n",(t+1),i,(t+1));
        }
        //printf("Soma: %lf \n", sum);
    }
    printf("Soma: %lf \n", sum);
}