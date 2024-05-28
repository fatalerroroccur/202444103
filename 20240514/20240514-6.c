#include <stdio.h>
#define dt 3
int main(){
    int score[3];
    int cnt,sum=0;
    float avg;
    for(cnt=0;cnt<dt;cnt++){
        printf("과목 %d 점수 : ___\b\b\b",cnt+1);
        scanf("%d",&score[cnt]);
    }
    for(cnt = 0; cnt<dt;cnt++){
        sum += score[cnt];
    }
    avg= (float)sum/dt;
    printf("총점 : %d\n",sum);
    printf("평균 : %.2f\n",avg);
    return 0;
}