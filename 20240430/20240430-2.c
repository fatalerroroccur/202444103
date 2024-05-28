#include <stdio.h>
int main(){
    int a, b=1, odd=0, even=0;
    while(1){
        scanf("%d",&a);
        if(a==0){
            break;
        }else if(b==a%2){
            ++odd;
        }else{
            ++even;
        }
    }
    printf("홀%d 짝%d",odd,even);
}