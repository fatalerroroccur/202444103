#include <stdio.h>
#define al 5
int main(){
    int s_l[al]={54132};
    int a,b,temp,sort;
    printf("초기 배열 요소 : 54132\n");
    printf("\n[for 문으로 선택 정렬 수행]\n");
    for(a=0;a<al-1;a++){
        sort = a;
        for(b=a+1;b<al;b++)
            if(s_l[b]<s_l[sort])
                sort = b;
            temp = s_l[a];
            s_l[a]=s_l[sort];
            s_l[sort]=temp;
    }
        printf("결과> 배열요소 :");
        for(a=0;a<al;a++){
            printf("%d",s_l[a]);
        }
        return 0;
}