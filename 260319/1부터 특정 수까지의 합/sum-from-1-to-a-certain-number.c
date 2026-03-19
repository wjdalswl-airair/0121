#include <stdio.h>
int wow(int a) {
	int total = 0;
	for (int i = 1; i <= a; i++) {
		total += i;
	}
	int result = total / 10;
	return result;
}

int main() {
	// Please write your code here.
	int n;
	scanf("%d ", &n);
	 
	printf("%d", wow(n));

	return 0;
}