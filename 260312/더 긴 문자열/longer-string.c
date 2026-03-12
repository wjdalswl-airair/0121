#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char a[21],b[21];
    scanf("%s",a);
    scanf("%s",b);

    if (strlen(a) > strlen(b)) {
        printf("%s %d",a,strlen(a));
    }
    else if (strlen(a) < strlen(b)) {
        printf("%s %d",b,strlen(b));
    }
    else {
        printf("same");
    }


    return 0;
}