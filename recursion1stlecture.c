//FACTORIAL
#include<stdio.h>
//Q.1 FIND THE FACTORIAL OF THE GIVEN NUMBER USING RECURSIVE FUNCTION.

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    int ans= factorial(n);
    printf("the factorial of %d is %d\n",n,ans);
    return 0;

}
