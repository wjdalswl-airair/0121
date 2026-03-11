#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = a; i >= 0; i--) {
		printf("%d\n", i);
	}
	printf("발사");
	return 0;
}