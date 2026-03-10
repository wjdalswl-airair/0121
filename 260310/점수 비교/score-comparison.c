#include <stdio.h>

int main() {
    // Please write your code here.
    int a_math,a_eng, b_math, b_eng;
    scanf("%d %d",&a_math, &a_eng);
    scanf("%d %d",&b_math, &b_eng);

    if (a_math > b_math && a_eng > b_eng) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}