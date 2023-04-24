#include<stdio.h>
//Q.2 FIND THE FIBONNACCI SERIES.

int fibonnnaci(int n){
    if(n==1)
      return 0;
    if(n==2)
    return 1;
    
    return fibonnnaci(n-1)+fibonnnaci(n-2);
}
int main(){
    printf("ENTER THE FIBBONNACII NUMBER :\n");
    int n;
    scanf("%d",&n);
    printf("the fibonnaci series is:\n");
    for(int i=1;i<=n;i++){
        printf("%d ",fibonnnaci(i));
    }
    return 0;
}


