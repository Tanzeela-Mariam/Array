#include<stdio.h>

int main(){
int sum=0;
int a1[2][2]={11,12,13,14};
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        if(i==j){
            sum+=a1[i][j];
        }
    }
}
printf("%d", sum);


return 0;
}
