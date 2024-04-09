#include <stdio.h>

int main(){
    int a,val;
    a = 8;
    val = ++a;
    printf("a = 8일때 \n");
    printf("val=++a이면 val = %d, a = %d\n",val,a);
    a = 8;
    val = a++;
    printf("val=a++이면 val = %d, a = %d\n",val,a);
    a = 8;
    val = --a;
    printf("val=--a이면 val = %d, a = %d\n",val,a);
    a = 8;
    val = a--;
    printf("val=a--이면 val = %d, a = %d\n",val,a);
    
}