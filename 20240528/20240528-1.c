#include <stdio.h>
int main(){
    int a = 8;
    int *pa = NULL;
    pa = &a;
    float b=0;
    b=2.32;
    float *pb = &b;
    printf("%u\n",a);
    printf("%u\n",&a);
    printf("%u\n\n",pa);
    printf("%u\n",b);
    printf("%u\n",&b);
    printf("%u\n\n",pb);
    printf("%u\n",NULL);
    *pa = 50;
    printf("%u\n",pa);
    printf("%u\n",a);
}