#include <stdio.h>

int n;


void wow1(int level) {
    printf("%d ", level);
    if (level==n) { 
        printf("\n");
        return;
        }

    wow1(level+1);
}

void wow2(int level) {
    printf("%d ", level);
    if (level==1) { return;}

    wow2(level-1);
}

int main() {
    scanf("%d", &n);
    
    // Please write your code here.
    wow1(1);
    wow2(n);
    
    return 0;
}