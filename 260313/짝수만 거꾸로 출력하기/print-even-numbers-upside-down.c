#include <stdio.h>
int main() {

		// Please write your code here.
		int N, j;
		N = 1;
		scanf("%d", &N);
		int bucket[101] = {-1 };
		j = 0;
		for (int i = 0; i < N; i++) {
			int num;
			scanf("%d ", &num);
			if (num % 2 == 0) {
				bucket[j] = num;
				j++;
			}
		}
		for (int i = j - 1; i >= 0; i--) {
			if (bucket[i] >= 0) {
			printf("%d ", bucket[i]);
			}
		}
	return 0;
}