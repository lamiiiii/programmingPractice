#include <iostream>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B;
	cin >> C;
	int d = C / 60;
	int e = C % 60;
	if (0 <= A && A <= 23 && 0 <= B && B <= 59 && 0 <= C && C <= 1000) {
		if (B + e > 59) {
			if (A + d + 1 > 23) {
				A = A + d - 23;
			}
			else {
				A = A + d + 1;
			}
			B = B + e - 60;
		}
		else {
			if (A + d > 23) {
				A = A + d - 24;
			}
			else {
				A = A + d;
			}
			B = B + e;
		}
		cout << A << " " << B;
	}
}