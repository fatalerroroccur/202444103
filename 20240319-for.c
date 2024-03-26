#include <stdio.h>
int main()
{
    int i;
    int cnt;
    int j;
    printf("알파벳 대문자가 출력됩니다.\n");
    for (cnt = 65; cnt <= 90; cnt++)
     {
        printf("%c",cnt);
     }
    printf("\n");
    for (i=1; i<=5; i++)
    {
        for (j=1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a=1; a<=5; a++)
    {
        for (int b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int c=5; c>=1; c--)
    {
        for (int d=1; d<=c; d++)
        {
            printf("*");
        }
        printf("\n");
    }
    int p=4;
    for (int e=0; e<=5; e++, p+=e){

    }
    printf("%d",p);
    return 0;
}