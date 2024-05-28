#include <stdio.h>
void get_number(int graph[]);
int main(){
    int count, cnt=0, max=0;
    scanf("%d",&count);
    int graph[count];
    for (int i=1;i<=count;i++){
        scanf("%d",&graph[i]);
    }
    for(int i=count-1;i>=0;i--){
        if(max<graph[i]){
            max = graph[i];
            cnt++;
        }
    }
    printf("%d",cnt);
}