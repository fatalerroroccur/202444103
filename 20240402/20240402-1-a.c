#include <stdio.h>

int main(){
    int a;
    int i;
    printf("단을 입력하시오\n");
    scanf("%d",&a);
    while(i<=9)
    {
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
    }
}