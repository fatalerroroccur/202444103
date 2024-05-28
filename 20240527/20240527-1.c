#include <stdio.h>
int main(){
    for(int i=0;i<=5;i++){
        int j=0;
        while(1){
            if(j==i){
                break;
            }else{
            printf("%d",i+2);
            j++;
            }
        }
        printf("\n");
    }
}