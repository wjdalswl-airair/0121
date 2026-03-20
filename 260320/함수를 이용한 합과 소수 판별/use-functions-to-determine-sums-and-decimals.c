#include <stdio.h>
#include <stdbool.h>

int test1(int n) {
    int cnt=0;
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            cnt += 1;
        }
    }
    if (cnt==2) {
        return true;
    }
    return false;
}

int test2(int n) {
    int Sum = 0;
    while (n/10 > 0) {
        Sum += n%10;
        n /=10;
    }
    Sum += n;

    if (Sum % 2==0) {
        return true;
    }
    return false;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    // Please write your code here.
    int cnt=0;
    for (int i=A; i<=B; i++) {
        if (test1(i)) {
            if (test2(i)) {
                cnt += 1;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}