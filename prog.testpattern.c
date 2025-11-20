// sem-3

#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        int x=1;
        for(int j=1;j<=(2*i)-1;j++){
            if(i==j || j==1 || j==(2*i)-1){
                printf("%d ",x);
            }else{
                printf("* ");
            }
            if(j<i){
                x++;
            }else{
                x--;
            }
        }
        printf("\n");
    }
}