#include <stdio.h>
#include <stdbool.h>

int REAL(int n) {
    if (n%2==0) {
        return false;
    }
    if (n%10==5) {
        return false;
    }
    if (n%3==0 && n%9!=0) {
        return false;
    }
    return true;
   
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    
    // Please write your code here.
    int cnt = 0;
    for (int i=a; i<=b; i++) {
        if (REAL(i)) {
            cnt += 1;
        }
    }
    printf("%d",cnt);
    
    return 0;
}