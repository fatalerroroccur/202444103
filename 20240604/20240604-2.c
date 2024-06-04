#include <stdio.h>
int main(){
    int cnt, size, choice;
    char *task[] = {
        "desk",
        "computer",
        "books",
        "usb",
        "exit"
    };
    printf("포인터 배열의 요소 선택(종료:5)\n");
    size = sizeof(task)/sizeof(task[0]);
    for(cnt=0;cnt<size;cnt++){
        printf("%d.%s\n",cnt+1,task[cnt]);
    }
    while(1){
        printf("\n숫자입력(1~5) : ");
        scanf_s("%d",&choice);
        if(choice<1||choice>5){
            printf("입력숫자오류!\n");
            continue;
        } else if (choice ==5){
            break;
        } else {
            printf("선택한 단어는 \"%s\"입니다.\n",task[choice-1]);
        }
    }
}