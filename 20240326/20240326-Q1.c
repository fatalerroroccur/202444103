#include <stdio.h>
int main()
{
    int A=1;
    int B=0;
    while(A<=10){
        B+=A;
        printf("%d\n",A);
        A++;
    }
    printf("1부터 10까지의 합 = %d\n",B);
    printf("while문이 끝난 후의 num의 값 = %d",A);
}