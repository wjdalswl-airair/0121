#include <stdio.h>
char arr[6] = { 0 };

void PrintAll() {
    for (int i = 0; i < 6; i++) {
        printf("%d\n", arr[i]);
    }
}


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 6; i++) {
        arr[i] = n;
        n++;
    }
    PrintAll();
    return 0;
}