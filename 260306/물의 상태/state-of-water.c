#include <stdio.h>

int main() {
    // Please write your code here.

    int water;
    scanf("%d",&water);

    if (water < 0) {
        printf("ice");
    }
    else if (water >= 100) {
        printf("vapor");
    }
    else {
        printf("water");
    }
    return 0;
}