#include <iostream>
using namespace std;
int main() {
	int N, X, a, c = 0;
	int arr[10000];
	cin >> N >> X;
	if (1 <= N && 1 <= X && N <= 10000 && X <= 10000) {
		for (int i = 0; i < N; i++) {
			cin >> a;
			if (a < X) {
				arr[c] = a;
				c++;
			}
		}
		for (int i = 0; i < c; i++) {
			cout << arr[i] << " ";
		}
	}
}
