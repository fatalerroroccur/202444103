#include <stdio.h>
int more(int x, int y){
    return (x>y)?x:y;
}
int main(){
    int x,y;
    scanf("%d,%d",&x,&y);
    printf("%d",more(x,y));
    return 0;
}