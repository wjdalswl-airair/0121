#include <stdio.h>

int main() {
    // Please write your code here.
    int a,n,i;
    scanf("%d %d", &a, &n);

    for (i=0; i<n; i++) {
        printf("%d\n",a+n);
        a=a+n;
    }

    return 0;
}