#include <stdio.h>

int main() {
    // Please write your code here.
    int total=0;
    for (int i=0;i<4;i++) {
        for (int j=0; j<=i;j++) {
            int num;
            scanf("%d",&num);
            total += num;
        }
    }
    printf("%d",total);
    return 0;
}