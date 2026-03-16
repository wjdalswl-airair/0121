#include <stdio.h>

int main() {
    // Please write your code here.
    for (int i=0; i<4;i++) {
        int total = 0;
        for (int j=0;j<4;j++) {
            int num;
            scanf("%d",&num);
            total += num;
        }
        printf("%d\n",total);
    }
    return 0;
}