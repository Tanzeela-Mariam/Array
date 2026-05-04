#include<stdio.h>

int main(){
    int x,y;
    printf("Enter number of rows\t");
    scanf("%d", &x);
    printf("Enter number of column\t");
    scanf("%d", &y);

    int a1[x][y];
    for(int i=0; i<x; i++){ //Enter elements from user
        for(int j=0; j<y; j++){
            printf("Enter the value of array[%d][%d]", i,j);
            scanf("%d", &a1[i][j]);

        }
    }
    for(int i=0; i<x; i++){ //Print elements from user
        for(int j=0; j<y; j++){
            printf("%d\t",a1[i][j]);

        }
        printf("\n");
    }



return 0;
}
