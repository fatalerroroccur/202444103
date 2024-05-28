#include <stdio.h>
int main(){
    int start,end,sum;
    scanf("%d %d",&start,&end);
    while(start<=end){
        sum+=start;
        ++start;
    }
    printf("%d",sum);
}