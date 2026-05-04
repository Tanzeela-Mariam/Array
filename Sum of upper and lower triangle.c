#include<stdio.h>

int main(){
    int a1[3][3]={1,2,3,4,5,6,7,8,9};
    int sum_l=0;
    int sum_u=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i<j){
                sum_l=sum_l+a1[i][j];
            }
            if(i>j){
                sum_u=sum_u+a1[i][j];
            }
        }
    }

    printf("%d", sum_l+sum_u);

return 0;
}
