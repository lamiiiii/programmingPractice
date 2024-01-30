#include <stdio.h>
int arr[1000000];
int main(void) {
	int N;
	int max = -1000000;
	int min = 1000000;
	scanf("%d", &N);
	if (1 <= N && N <= 1000000) {
		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
			if (arr[i] < min) {
				min = arr[i];
			}
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}
	printf("%d %d", min, max);
}