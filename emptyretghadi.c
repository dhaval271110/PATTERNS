#include<stdio.h>
void main(){
    for(int i=5;i>0;i--){
        for(int k=0;k<5-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i==j || j==1 || i==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++){
        for(int k=0;k<5-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i==j || j==1 || i==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}