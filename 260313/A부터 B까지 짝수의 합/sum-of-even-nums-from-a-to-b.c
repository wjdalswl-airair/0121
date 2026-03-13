#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int total = 0;
    for (int i = a; i<=b;i++) {
        if (i%2==0) {
           total += i; 
        }
        
    }
    printf("%d",total);
    return 0;
}