#include <stdio.h>

void square(int n, int m) {
    for (int i=0; i<n;i++) {
        for (int j=0; j<m;j++) {
            printf("1");
        }
        printf("\n");
    }

}

int main() {
    int row_num, col_num;
    scanf("%d %d", &row_num, &col_num);
    // Please write your code here.
    square(row_num,col_num);
    return 0;
}