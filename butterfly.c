#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }

        for(int k=1;k<=(5-i)*4;k++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }

        for(int k=1;k<=(5-i)*4;k++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}