#include <iostream>
using namespace std;
int main() {
	int A, B;
	while (!(cin >> A >> B).eof()) {
		if (0 < A && A < 10 && 0 < B && B < 10) {
			cout << A + B << endl;
		}
	}
}