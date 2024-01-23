#include <iostream>
using namespace std;
int main() {
    int T, A, B;
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> T;
    if (T > 0 && T <= 1000000) {
        for (int i = 0; i < T; i++) {
            cin >> A >> B;
            if (A >= 1 && A <= 1000 && B >= 1 && B <= 1000) {
                cout << A + B << "\n";
            }
        }

    }
}