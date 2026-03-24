#include <stdio.h>

int n;

void star(int level) {
    for (int i=0; i<level; i++) {
        printf("*");
    }
    printf("\n");

    if (level==n) {return;}

    star(level+1);
    
}

int main() {
    scanf("%d", &n);
    // Please write your code here.
    star(1);
    return 0;
}