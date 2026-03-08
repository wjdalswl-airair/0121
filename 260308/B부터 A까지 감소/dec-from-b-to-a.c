#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,i;
    scanf("%d %d",&a, &b);

    for (i=b; i>=a; i-=1) {
        printf("%d ",i);
    }
    return 0;
}