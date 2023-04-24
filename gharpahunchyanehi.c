#include<stdio.h>
void reachhome(int src,int dest){
    printf("for %d source the destination is %d\n",src,dest);
    
    if(src==dest){
        printf("pohoch gaya\n");
        return ;
    }
    src++;
    reachhome(src,dest);
    


}
int main(){
    int dest=10;
    int src=1;
    reachhome(1,10);
    return 0;




}