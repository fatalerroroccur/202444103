#include <stdio.h>
int main(){
    char str[20];
    int cnt, leng=0;
    printf("문자열을 20바이트 이내로 입력하시오 : ");
    scanf("%s",str,sizeof(str));
    for(cnt = 0;str[cnt]!='\0';cnt++){
        leng++;
    }
    printf("\n");
    printf("입력한 문자열의 길이 : %d바이트\n",leng);
    return 0;
}