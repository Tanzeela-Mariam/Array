#include<stdio.h>

int main(){
    int x,y,z,w;
    printf("Enter row of a1: ");
    scanf("%d", &x);
    printf("Enter row of a1: ");
    scanf("%d", &y);
    printf("Enter row of a2: ");
    scanf("%d", &z);
    printf("Enter row of a2: ");
    scanf("%d", &w);
    int a1[x][y];
    int a2[z][w];
    int a3[x][w];

    if(y==z){
            for(int i=0; i<x; i++){
                for(int j=0; j<y; j++){
                    printf("Enter a1[%d][%d]", i,j);
                    scanf("%d", &a1[i][j]);
                }
            }
            for(int i=0; i<z; i++){
                for(int j=0; j<w; j++){
                    printf("Enter a2[%d][%d]", i,j);
                    scanf("%d", &a2[i][j]);
                }
            }
           for (int i = 0; i < x; i++) {
            for (int j = 0; j < w; j++) {
            a3[i][j] = 0;
            for (int k = 0; k < y; k++) {
                a3[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
        for(int i=0; i<x; i++){
                for(int j=0; j<w; j++){
                    printf("%d\t", a3[i][j]);
                }
                printf("\n");
            }




                }
    else{
        printf("NOT POSSIBLE!!!");
    }








return 0;
}
