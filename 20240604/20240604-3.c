#include <stdio.h>
void creed(char **ppc);
void target(char **ppc);
int main(){
    char *pc;
    printf("나의 생활 어쩌고 좌우명 저쩌고\n\n");
    creed(&pc);
    printf("생활 신조 : %s\n",pc);
    target(&pc);
    printf("인생 좌우명 : %s\n",pc);
}
void creed(char **ppc){
    *ppc="오늘 하루도 최선을 다하자";
}
void target(char **ppc){
    *ppc="후회없는 삶을";
}