#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int result = a;
    while (result <=b) {
        if (result %2==1) {
            result = 2*result;
            printf("%d ",result);
        }
        else {
            result = result +3;
            printf("%d ",result);
        }
    }
    return 0;
}