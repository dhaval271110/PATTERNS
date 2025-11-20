#include<stdio.h>
void main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            if(i==j || i-j==2){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=3;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i==j || i-j==2){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}