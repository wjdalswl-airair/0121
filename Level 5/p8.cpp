#include <stdio.h>
int KFC() {
    int a;
    scanf("%d", &a);
    return a;
}
void BBQ(int a) {
    if (a > 5) {
        printf("만세");
    }
    else {
        printf("다시");
    }
}
int main() {
    int n = KFC();
    BBQ(n);
    return 0;
}