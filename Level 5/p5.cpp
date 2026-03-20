#include <stdio.h>
void LOT() {
    printf("12345\n");
}
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        LOT();
    }
    return 0;
}