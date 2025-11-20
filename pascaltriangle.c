#include<stdio.h>
#include <math.h>

int factorial1(int i);
int factorial2(int j);
int factorial3(int i, int j);

int factorial1(int i){
    int fact1=1;
    while(i>0){
        fact1*=i;
        i--;
    }
    return fact1;
}
int factorial2(int j){
    int fact2=1;
    while(j>0){
        fact2*=j;
        j--;
    }
    return fact2;
}

int factorial3(int i,int j){
    int d=i-j;
    int fact3=1;
    while(d>0){
        fact3*=d;
        d--;
    }
    return fact3;
}

int demo(int i,int j){  
    int result = factorial1(i) / ( factorial2(j) * factorial3(i,j) );
    return result;
}

int main(){
    for(int i=1;i<=5;i++){
        for(int k=1;k<=5-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(j==1 || i==j){
                printf("1 ");
            }else{
                int x = demo(i-1,j-1);
                printf("%d ",x);
            }
        }
        printf("\n");
    }
    return 0;
}