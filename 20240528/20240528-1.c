#include <stdio.h>
int main(){
    int a = 8;
    int *pa = NULL;
    pa = &a;
    float b=3.75;
    float *pb = &b;
    printf("%u\n",a);
    printf("%u\n",&a);
    printf("%u\n\n",pa);
    printf("%u\n",b);
    printf("%u\n",&b);
    printf("%u\n\n",pb);
    printf("%u\n",NULL);
    *p = 50;
    printf("%u\n",p);
    printf("%u\n",a);
}