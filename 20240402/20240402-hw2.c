#include <stdio.h>
int main(){
    int a=0,b=0,c=1,i;
    scanf("%d %d",&a,&b);
    for(i=1110;i<=b;i++){
        c=c*a;
    }
    printf("%d",c);
}
//밑과 지수를 입력했을때 그 값을 구하는 코드