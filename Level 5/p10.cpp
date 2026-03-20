#include <stdio.h>
char arr[4] = { 0 };

void input() {
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
}
void output() {
    for (int i = 3; i >= 0; i--) {
        printf("%d", arr[i]);
    }

}

int main() {
    input();
    output();
    return 0;
}