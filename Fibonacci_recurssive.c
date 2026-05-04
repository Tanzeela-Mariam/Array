#include<stdio.h>

int fibonacci(int n,int first, int second){
    if(n==0){\\There will be no values
        return 0;
    }
    if(n==1){\\sum will end in one
        return first;
    }
    int x=first+second;
    return first + fibonacci(n-1,second,x);
}



int main(){
int n, sum=0;
printf("n:\t");
scanf("%d",&n);
sum=fibonacci(n,0,1);
printf("SUM:\t%d",sum);

return 0;
}
