#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);

	printf("%d 입력함\n", a);
	a++;
	printf("a++을 수행하면 %d이 됩니다", a);

	return 0;
}