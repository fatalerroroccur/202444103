#include <stdio.h>
int main() {
    int in;
    int y;
    printf("윤년이면 1, 평년이면 0 출력\n");
    printf("연도입력");
    scanf("%d",&in);
    y = ((in%4==0)&&!(in%100==0))||(in%400==0);
    printf("%d년은 %d에 해당",in,y);
    
}