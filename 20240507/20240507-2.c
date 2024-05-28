#include <stdio.h>
int minus(int a);
int main(){
    int n;
    scanf("%d",&n);
    minus(n);
}
int minus(int n){
    if(n==0){
        return 0;
    } else {
        printf("%d\n",n);
        return minus(n-1);
    }
}