#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int result = a;
    while (result <=b) {
        if (result %2==1) {
            printf("%d ",result);
            result = 2*result;
            
        }
        else {
            printf("%d ",result);
            result = result +3;
            
        }
    }
    return 0;
}