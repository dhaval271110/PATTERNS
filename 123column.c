#include<stdio.h>
void main(){
    int print=1;
    for(int i=1;i<=5;i++){
        int x=4;
        for(int j=1;j<=i;j++){
            if(j==1){
                print=i;
            }else{
                print+=x;
                x--;
            }
            printf("%d ",print);
        }
        printf("\n");
    }
}