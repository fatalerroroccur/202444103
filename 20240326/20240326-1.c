#include <stdio.h>
int main()
{
    short num1;
    int num2;
    long long num3;

    printf("자료형 sizeof() 함수\n");
    printf("1.short형 %d바이트\n", sizeof(num1));
    printf("2.int형 %d바이트\n", sizeof(num2));
    printf("3.long long형 %d바이트\n", sizeof(num3));
    printf("1바이트는 8비트\n");
    printf("4.short형 %d비트\n", sizeof(num1)*8);
    printf("2.int형 %d비트\n", sizeof(num2)*8);
    printf("3.long long형 %d비트\n", sizeof(num3)*8);
}