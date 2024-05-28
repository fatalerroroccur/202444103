#include <stdio.h>
int fact(int n);
int main(){
    int input=0;
    int result=0;
    scanf("%d",&input);
    result = fact(input);
    printf("%d",result);
}
int fact(int n){
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return(n*fact(n - 1));
    }
}