#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m;
    sanf("%d %d",&n,&m);

    int arr1[10][10];
    int arr2[10][10];
    for (int i=0; i<n;i++) {
        for (int j=0;j<m;j++) {
            int num;
            scanf("%d ",&num);
            arr1[i][j]=num;
        }
    }
    for (int i=0; i<n;i++) {
        for (int j=0;j<m;j++) {
            int num;
            scanf("%d ",&num);
            arr2[i][j]=num;
        }
    }
    for (int i=0; i<n;i++) {
        for (int j=0;j<m;j++) {
            if (arr1[i][j]==arr2[i][j]) {
                printf("%d",1);
            }
            else {
                printf("%d",0);
            }
        }
        printf("\n");
    }

    return 0;
}