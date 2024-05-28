#include <stdio.h>
void set(){
    for (int i=0;i<cnt;i++){
        printf("========\n");
    }
}
int main(){
    int cnt;
    scanf("%d",&cnt);
    set();
    return 0;
}