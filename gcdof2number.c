#include<stdio.h>
//Q.3 FIND THE GCD OF TWO NUMBERS
int gcd(int a,int b){
    if(b==0){
        return(a);
    }
    if(a<b){
        gcd(b,a);
    }
    return gcd(b,a%b);


}
int main(){
    printf("THE GCD OF TWO NUMBERS\n");
    int r;
    printf("ENTER a,b:\n");
    
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);


    int ans=gcd(a,b);
    printf("THE GCD OF %d AND %d IS %d\n",a,b,ans);
    return 0;

}



