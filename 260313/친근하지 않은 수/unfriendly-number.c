#include <stdio.h>

int main() {
	// Please write your code here.
	int N;
	scanf("%d", &N);

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) { continue; }
		if (i % 3 == 0) { continue; }
		if (i % 5 == 0) { continue; }
		cnt += 1;
	
	}
	printf("%d", cnt);
	return 0;
}