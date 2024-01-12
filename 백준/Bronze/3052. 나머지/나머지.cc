#include <stdio.h>
int main(void) {
	int arr[10], k, count = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] %= 42;

		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				count--;
				break;
			}
		}
		count++;
	}
	printf("%d", count);
}