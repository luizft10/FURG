#include <stdio.h>
#define N 5
void lePGeometrico(){
    struct PGeom{
        int x,y,z;
    };
    struct PGeom pgeom[N];
    for(int c=0;c<N;c++){
        printf("Digite X do %dº Ponto Geometrico ",c+1);
        scanf("%d",&pgeom[c].x);
        getchar();
        printf("Y do %dº Ponto Geometrico: ",c+1);
        scanf("%d", &pgeom[c].y);
        getchar();
        printf("Z do %dº Ponto Geometrico: ",c+1);
        scanf("%d", &pgeom[c].z);
    }
    for(int z=0;z<N;z++){
        printf("%dº [x,y,z] = [%d,%d,%d]\n" ,z+1, pgeom[z].x,pgeom[z].y,pgeom[z].z);
    }
}

void main(){
    
    lePGeometrico();
}