#include<stdio.h>

int main(){
    int x,y,z,w;
    printf("Enter row of a1:\t");
    scanf("%d", &x);
    printf("Enter column of a1:\t");
    scanf("%d", &y);
    printf("Enter row of a2:\t");
    scanf("%d", &z);
    printf("Enter row of a2:\t");
    scanf("%d", &w);
    int a1[x][y];
    int a2[z][w];
    int result[x][y];

    if(x==z && y==w){
        for(int i=0; i<x; i++){ //a1 input
            for(int j=0; j<y; j++){
                printf("Enter the element of a1[%d][%d]\t",i,j);
                scanf("%d", &a1[i][j]);
            }
        }
        for(int i=0; i<x; i++){ //a2 input
            for(int j=0; j<y; j++){
                printf("Enter the element of a2[%d][%d]\t",i,j);
                scanf("%d", &a2[i][j]);
            }
        }
         for(int i=0; i<x; i++){ //summation
            for(int j=0; j<y; j++){
                result[i][j]=a1[i][j] + a2[i][j];
            }
        }
        for(int i=0; i<x; i++){ //Print result
            for(int j=0; j<y; j++){
                printf("%d \t", result[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("The rows and columns must match for matrix to be added");
    }




return 0;
}
