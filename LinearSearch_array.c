#include<stdio.h>

int main(){
    int a1[5]={1,2,3,4,5};
    int value=3;
    int p= -1;
    for(int i=0; i<5; i++){
        if(value==a1[i]){
            p= i+1;
            break;
        }

    }
    if(p==-1){
        printf("Not found");
    }
    printf("%d", p);


return 0;
}
