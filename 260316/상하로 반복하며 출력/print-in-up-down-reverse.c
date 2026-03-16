#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int arr[9][9];
    for(int j=0;j<n;j++) {
        if (j%2==0) {
            for (int i=0;i<n;i++){
            arr[i][j] = i+1;
        }
        }
        if (j%2!=0) {
            for (int i=0;i<n;i++){
            arr[i][j] = n-i;
        }
        }
    }
    for(int j=0;j<n;j++) {
        for (int i=0;i<n;i++){
            printf("%d",arr[j][i]);    
        }
        printf("\n");
    }
    return 0;
}