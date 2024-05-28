#include <stdio.h>
int main(){
    int point;
    char grade;
    scanf("%d",&point);
    switch(point/10){
        case 10:
        case 9:
            grade='A';
            break;
        case 8:
            grade='B';
            break;
        case 7:
            grade='C';
            break;
        default:
            grade='D';
    }
    printf("%c",grade);
}