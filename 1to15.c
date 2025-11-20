#include<stdio.h>
void main(){
    int c=1;
    for(int i=0;i<=5;i++){
        for(int j=0;j<i;j++){
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}