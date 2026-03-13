#include <stdio.h>

int main() {
    // Please write your code here.
    char a;
    scanf("%s",a);

    char fruit[5] = {'apple','banana','grape','blueberry','orange'};
    int cnt =0;

    for (int i=0;i<5;i++) {
        if (fruit[i][3]==a || fruit[i][4]==a) {
            printf("%s\n",fruit[i])
            cnt += 1;
        }
    }
    printf("%d",cnt);
    return 0;
}