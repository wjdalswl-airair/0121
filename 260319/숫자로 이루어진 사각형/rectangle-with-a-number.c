#include <stdio.h>
void square(int n) {
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (cnt == 10) {
				cnt = 1;
			}
			printf("%d ", cnt);
			cnt += 1;
		}
		printf("\n");
	}
}

int main() {
	int a;
	scanf("%d", &a);

	square(a);

	return 0;
}