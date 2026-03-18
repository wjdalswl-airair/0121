#include <stdio.h>

int main() {

	int num[5];
	for (int i = 0; i < 5; i++) {
		int Input;
		scanf("%d", &Input);
		num[i] = Input;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}


	return 0;
}