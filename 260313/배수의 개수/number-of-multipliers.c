#include <stdio.h>

int main() {
    // Please write your code here.
    int three, five;
    three = 0;
    five = 0;

    for (int i=0; i<10; i++) {
        int num;
        scanf("%d",&num);

        if (num%3 == 0) {
            three += 1;
        }
        if (num%5 == 0) {
            five += 1;
        }

    }
    printf("%d %d",three, five);
    return 0;
}