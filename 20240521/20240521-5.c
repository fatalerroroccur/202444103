#include <stdio.h>
int main(){
    int suNo;
    scanf("%d",&suNo);
    suNo++;
    int A[suNo];
    int S[suNo];
    for (int i=1;i<=suNo;i++){
        scanf("%d",&A[i]);
    }
    S[1]=A[1];
    for (int i=2;i<=suNo;i++){
        S[i]=S[i-1]+A[1];
    }
    for (int i=1;i<=suNo;i++){
        printf("%d ",S[i]);
    }
    return 0;
}