#include <stdio.h>
int gcd(int n, int m) {
	int Max = -21e8;
	for (int i = 1; i <= m; i++) {
		if (n%i == 0 && m%i == 0) {
			if (Max < i) {
				Max = i;
			}
		}
	}
	return Max;
}

int main() {
	// Please write your code here.
	int n, m;
	scanf("%d %d", &n, &m);
	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}

	int result = gcd(n, m);
	printf("%d", result);

	return 0;
}