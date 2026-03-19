#include <stdio.h>
int Min(int a,int b,int c) {
	int result = 21e8;
	if (a < result) {
		result = a;
	}
	if (b < result) {
		result = b;
	}
	if (c < result) {
		result = c;
	}
	
	return result;
}

int main() {
	// Please write your code here.
	int a,b,c;
	scanf("%d %d %d ", &a,&b,&c);
	 
	int result = Min(a, b, c);
	printf("%d", result);

	return 0;
}