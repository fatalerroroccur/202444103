#include <stdio.h>
int Add();
int g_a;
int g_b;
int main(){
    int sum=0;
    g_a = 10;
    g_b = 20;
    printf("중략0\n");
    sum = Add();
    printf("중략2\n결과 전역 변수 사용 : %d + %d = %d\n",g_a,g_b,sum);
}
int Add(){
    int hap = 0;
    hap = g_a + g_b;
    printf("중략1\n");
    return hap;
}
