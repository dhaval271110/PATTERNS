#include<stdio.h>
void main(){
    int x=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((i%2)==1){
                if(j==1 && i!=1){
                    x+=6;
                }
                printf("%d ",x);
                x++;
            }else if((i%2)==0){
                if(j==1){
                    x+=4;
                }
                printf("%d ",x);
                x--;
            }
        }
        printf("\n");
    }
}