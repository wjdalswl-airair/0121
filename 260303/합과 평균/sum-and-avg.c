#include <stdio.h>

int main() {
    // Please write your code here.
    int A,B;
    scanf("%d %d",&A,&B);
    double total = A+B;
    double avg = (double)total/2;

    printf("%d %.1lf",A+B,avg);
    return 0;
}