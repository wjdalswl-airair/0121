#include <stdio.h>

int main() {
    // Please write your code here.
    int flag = 0;
    while (flag == 0) {
        int n;
        scanf("%d",&n);
        if (n<25) {
            printf("Higher\n");
        }
        else if (n>25) {
            printf("Lower\n");
        }
        else {
            printf("Good");
            flag = 1;
        }
    }
    return 0;
}