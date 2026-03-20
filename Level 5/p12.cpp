#include <stdio.h>
char arr[3] = { 0 };

void QTR() {
    
    printf("QTR100%%");
}
void BBQ() {

    printf("BBQ100%%");
}


int main() {
   
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    int S = 0;
    for (int i = 0; i < 3; i++) {
        S += arr[i];
    }
    if (S >= 10) {
        QTR();
    }
    else {
        BBQ();
    }
    return 0;
}