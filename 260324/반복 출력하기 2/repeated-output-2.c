#include <stdio.h>

void wow(int level) {

    if (level==0) {return;}

    printf("HelloWorld\n");
    wow(level-1);

}

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    wow(n);
    return 0;
}