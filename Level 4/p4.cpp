#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    int m = n+5;

    int arr[5] = {m,m,m,m,m};
    for (int i;i<5;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}