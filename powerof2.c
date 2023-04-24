#include<stdio.h>
int powerof2(int n){
    if(n==0){
        return 1;
    }
    return 2*powerof2(n-1);
}
int main(){
    int n;
    printf("enter how much power of 2 you want ?\n");
    scanf("%d",&n);
    int ans=powerof2(n);
    printf("the answer when power of 2 is %d ...is %d ",n,ans);
    return 0;


}
