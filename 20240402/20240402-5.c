#include <stdio.h>
int main(){
    int num1;
    int num2;
    int max;
    int min;
    scanf("%d",&num1);
    scanf("%d",&num2);
    max = (num1>num2)?num1:num2;
    min = (max==num1)?num2:num1;
    printf("큰수 %d \n작은수 %d\n");

}