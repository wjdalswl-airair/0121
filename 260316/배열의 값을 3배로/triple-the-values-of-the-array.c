#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[3][3];
    for (int i=0;i<3;i++) {
        for (int j=0; j<3;j++) {
            int num;
            scanf("%d",&num);
            arr[i][j] = num;
        }
    }
    for (int i=0; i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("%d ",arr[i][j]*3);
        }
        printf("\n");
    }
    return 0;
}