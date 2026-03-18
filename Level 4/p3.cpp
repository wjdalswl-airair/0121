
#include <stdio.h>

int main() {

	int arr[7];
	for (int i=0;i<7;i++) {
		int num;
		scanf("%d",&num);
		arr[i] = num;

	}

	printf("%d",arr[0]+arr[6]);
	
	return 0;
}