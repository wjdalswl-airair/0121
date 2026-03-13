#include <stdio.h>

int main() {
    // Please write your code here.
    int N ;
    scanf("%d",&N);
    int Sum = 0;
    for (int i=1; i<=100;i++) {
        Sum += i;
        if (Sum >= N) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}