#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b,i,Sum,result;
    scanf("%d %d",&a, &b);

    int arr[12];
    arr[0] = a;
    arr[1] = b;
    printf("%d %d ", a, b);

    for (i = 2; i<10; i++) {
        Sum = arr[i-2]+arr[i-1];
        result = Sum %10;
        arr[i] = result;
        printf("%d ",arr[i]);
    } 

    return 0;
}