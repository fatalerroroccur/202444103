#include <stdio.h>
float set(int r){
    return r*r*3.14
}
int main(){
    int r;
    int result;
    scanf("%d",&r);
    result = set(r);
    printf("%.2f",result);
    return 0;
}