#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int a, b;
    int result=0;
    printf("두개의 정수 입력");
    scanf("%f %f", &a, &b);
    printf("%d + %d = %d",a,b,a+b);
    result = a-b;
    printf("%d - %d = %d",a,b,result);
    result = a*b;
    printf("%d * %d = %d",a,b,result);
    printf("%d / %d = %f",a,b,(float)a/b);
}