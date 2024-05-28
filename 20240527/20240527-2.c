#include <stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            printf("%d",i+3);
        }
        printf("\n");
    }
}