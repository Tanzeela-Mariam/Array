#include<stdio.h>
int main(){
    int x,y;
    printf("Enter row1: ");
    scanf("%d", &x);
    printf("Enter col1: ");
    scanf("%d", &y);
    int a1[x][y];
    int a2[y][x];


    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("Element a[%d][%d]", i,j);
            scanf("%d",&a1[i][j]);
        }

    }
    for(int i=0; i<x; i++){
        //for(int j=0; j<y; j++){
            for(int k=0; k<y; k++){
            a2[k][i]=a1[i][k];

        }

    }



    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            printf("%d", a2[i][j]);
        }
        printf("\n");

    }


return 0;
}
