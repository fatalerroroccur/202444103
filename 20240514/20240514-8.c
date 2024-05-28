#include <stdio.h>
#define max_numbers 100
#define RANGE 10
void readnumbers(int numbers[], int n);
void calculatefrequency(int numbers[], int n, int frequency[]);
void printfrequency(int frequency[], int range);

int main(){
    int N;
    printf("enter the number of elements (up to %d): ",max_numbers);
    scanf("%d",&N);
    if(N<1||N>max_numbers){
        printf("valid number of elements between 1 and %d.\n",max_numbers);
        return 1;
    }
    int numbers[N];
    readnumbers(numbers,N);
    int frequency[RANGE]={0};
    calculatefrequency(numbers,N,frequency);
    printfrequency(frequency,RANGE);
    return 0;
}
void readnumbers(int numbers[], int n){
    printf("enter %d numbers (0-9):",n);
    for (int i=0; i < n; i++){
        scanf("%d",&numbers[i]);
        if(numbers[i] < 0 || numbers[i]>9){
            printf("invalid number: %d please enter 0 and 9.\n",numbers[i]);
            i--;
        }
    }
}
void calculatefrequency(int numbers[], int n, int  frequency[]){
    for (int i = 0; i < n; i++){
        frequency[numbers[i]]++;
    }
}
void printfrequency(int frequency[],int range){
    for (int i =0; i<range; i++){
        printf("number %d : %d times\n",i,frequency[i]);
    }
}