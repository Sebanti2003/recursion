#include<stdio.h>
int climbstairs(int n){
    if(n<0){
        return 0;

    }
    if(n==0){
        return 1;
    }
    return climbstairs(n-1)+climbstairs(n-2);
}
int main(){
    printf("enter the number of stairs he need to climb down by jumping one or two steps\n");
    int n;
    scanf("%d",&n);
    int ans=climbstairs(n);
    printf("THE ANSWER IS : %d \n",ans);
    return 0;

}



