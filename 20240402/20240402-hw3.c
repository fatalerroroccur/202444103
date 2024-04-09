#include <stdio.h>
int main(){
    int a,b,c,d,A,B,C; //A는 빗변 B,C는 높이 또는 밑변
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            A=a;
            B=b;
            C=c;
        }else{
            A=c;
            B=b;
            C=a;
        }
    }else{
        if(b>c){
            A=b;
            B=a;
            C=c;
        }else{
            A=c;
            B=b;
            C=a;
        }
    }
    printf("%d를 빗변으로 갖는 삼각형으로 ",A);
    if(A*A==B*B+C*C){

        printf("직각삼각형입니다.");
    }else{
        printf("직각삼각형이 아닙니다.");
    }
}
//a,b,c 세값을 입력하고 삼각형의 빗변을 찾고 그 삼각형이 직각 삼각형인지 파악하는 코드를 만드시오