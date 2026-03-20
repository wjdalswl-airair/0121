#include <stdio.h>
 
int main() {
    
    int arr[4];
    for (int i=0; i<4; i++) {
        scanf("%d",&arr[i]);
    }

    int Sum=0;
    for (int i=0; i<4; i++) {
        Sum += arr[i];
    }
    printf("%d",Sum);
    return 0;

}