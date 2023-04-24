#include<stdio.h>
void printcount(int n){
    if(n==0){
        return ;
    }
    printf("%d\n",n);
     printcount(n-1);

}
int main(){
    printcount(5);
    


}