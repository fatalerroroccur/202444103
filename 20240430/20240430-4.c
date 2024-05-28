#include <stdio.h>
int main(){
    int a, i=1;
    scanf("%d",&a);
    if(a>=0){
        while(i<=9){
            printf("%dx%d=%d\n",a,i,a*i);
            ++i;
        }
    }else{
        return 1;
    }
    return 0;
}