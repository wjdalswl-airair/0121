#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for (int i=0; i<n; i++) {
        int a,b;
        scanf("%d %d", &a,&b);

        int Sum = 0;
        for (int j=a; j<=b; j++) {
            if (j%2==0) {
                Sum += j;
            }
        }
        printf("%d\n",Sum);
    }
    return 0;
}