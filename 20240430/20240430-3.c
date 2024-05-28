#include <stdio.h>
int main(){
    int inp=0, i=0, sum=0, avg;
    while(1){
        scanf("%d",&inp);
        if(inp==0){
            break;
        }else if(inp%2==1){
            sum += inp;
            ++i;
        }
        
    }
    avg = sum/i;
    printf("합%d 평%d",sum,avg);
}