#include <stdio.h>
void KFC() {
    printf("KFC입니다");
}
void MC() {
    printf("MC입니다");
}
int main() {

    int n;
    scanf("%d", &n);
    if (n==1) {
        KFC();
    }
    else if (n==2) {
        MC();
    }
    return 0;
}