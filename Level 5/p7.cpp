#include <stdio.h>
int main() {
    int arr[6];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    int n;
    scanf("%d", &n);
    for (int i = 3; i < 6; i++) {
        arr[i] = n;
        n++;
    }
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    } 
    return 0;
}