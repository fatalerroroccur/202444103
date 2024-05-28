#include <stdio.h>
int main(){
    int cnt,stand;
    scanf("%d %d",&cnt,&stand);
    int line[cnt];
    for (int i=1;i<=cnt;i++){
        scanf("%d",&line[i]);
    }
    for (int i=1;i<=cnt;i++){
        if (line[i]<stand) {
            printf("%d ",line[i]);
        }
    }
}