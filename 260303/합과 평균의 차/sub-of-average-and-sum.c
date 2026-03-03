#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int total = a+b+c;
    double avg = (double)total/3;

    printf("%d\n", total);
    printf("%.0f\n", avg);
    printf("%.0f", total-avg);

    return 0;
}