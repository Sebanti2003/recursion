#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void printdigits(int n,char *arr[]){
    if(n==0){
        printf("zero\n");
    }
    int digits=n%10;
    n=n/10;
    printdigits(n,arr);
    printf("%s ",arr[digits]); 
}
int main(){
    char arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    scanf("%d",&n);
    printdigits(n,arr);
    return 0;







}