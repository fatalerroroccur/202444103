#include <stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d",&a);
    a=a/2;
    while (1){
        if(b>a){
            break;
        }else{
            sum+=b;
            sum+=b;
            b++;
        }
    }
    printf("%d",sum);
}