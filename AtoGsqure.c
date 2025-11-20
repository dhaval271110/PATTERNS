#include<stdio.h>
void main(){
    int c=65;
    for(int i=1;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%c",c-i+1);
            c++;
        }
    printf("\n");
    }
}