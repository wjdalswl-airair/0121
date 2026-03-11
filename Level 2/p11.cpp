#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);

	if (num > 0) {
		printf("###\n###\n###");
	}
	else if (num<0) {
		printf("$$$\n$$$");
	}

	return 0;
}