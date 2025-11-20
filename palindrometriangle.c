#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        int x=i;
        for(int k=1;k<=5-i;k++){
            printf("  ");
        }
        for(int j=1;j<=(2*i)-1;j++){
            printf("%d ",x);
            if(j<i){
                x--;
            }else{
                x++;
            }
        }
        printf("\n");
    }
}