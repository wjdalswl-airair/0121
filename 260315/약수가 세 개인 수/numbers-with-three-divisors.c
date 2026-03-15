#include <stdio.h>

int main() {
    // Please write your code here.
    int start, end;
    scanf("%d %d",&start,&end); 
    int result = 0;
    
    for (int i=start; i<=end; i++) {
        int cnt = 0;
        for (int j=1; j<=i; j++) {
            if (i%j==0) {
                cnt +=1;
            }
        }
        if (cnt == 3) {
            result += 1;
        }
    }
    
    printf("%d", result);
    return 0;
}