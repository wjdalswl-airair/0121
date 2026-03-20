#include <stdio.h>
char arr[3] = { 'A','B','C' };

void KFC() {
    for (int i = 0; i < 3; i++) {
        printf("%c", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        KFC();
        printf("\n");
    }
    return 0;
}