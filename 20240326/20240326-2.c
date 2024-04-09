#include <stdio.h>
int main()
{
    int dc_num = 123;
    int oc_num = 0123;
    int hx_num = 0x123;

    printf("10진수 상수 %d\n",dc_num);
    printf("8진수 상수 %o\n",oc_num);
    printf("16진수 상수 %#x\n",hx_num);
    printf("10진수 상수 %d\n",dc_num);
    printf("8진수 상수 %d\n",oc_num);
    printf("16진수 상수 %d\n",hx_num);
    printf("10진수 상수 %o\n",dc_num);
    printf("8진수 상수 %o\n",oc_num);
    printf("16진수 상수 %o\n",hx_num);
    printf("10진수 상수 %#x\n",dc_num);
    printf("8진수 상수 %#x\n",oc_num);
    printf("16진수 상수 %#x\n",hx_num);   
}
//사전처리 반복문 : for while
//사후처리 반복문 : dowhile
//먼저 조건을 확인하는가 후에 하는가