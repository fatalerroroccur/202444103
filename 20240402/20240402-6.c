#include <stdio.h>
int main(){
    int point;
    char grade;
    printf("점수 : ");
    scanf("%d",&point);
    if(point>=90){
        grade = 'A';
    } else if(point >=80){
        grade = 'B';
    } else if(point >=70){
        grade = 'C';
    } else {
        grade = 'D';
    }
    printf("등급 : %c",grade);
}