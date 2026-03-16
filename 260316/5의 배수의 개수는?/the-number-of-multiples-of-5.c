#include <stdio.h>

int main() {
    // Please write your code here.
    int cnt=0;
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            int num;
            scanf("%d",&num);
            if (num%5==0) {
                cnt+=1;
            }
        }
     }
     printf("%d",cnt);
    return 0;
}