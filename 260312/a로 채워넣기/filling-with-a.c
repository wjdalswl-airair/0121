#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char sentence[101];
    scanf("%s", sentence);

    sentence[1] = 'a';
    int index = strlen(sentence);
    sentence[index-2] = 'a';
    printf("%s",sentence);
    return 0;
}