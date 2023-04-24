#include<stdio.h>
//recursion
void printcount(int n){
    if(n==0){
        return ;

    }
   
   
     printcount(n-1);
      printf("%d\n",n);

}
int main(){
    printcount(6);
    return 0;
}





