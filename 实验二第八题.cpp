#include <iostream>
using namespace std;
int main() {
	double a;
	cin >> a;
	double x = a, n;
	for (;;) {
		n = 0.5 * (x + a / x);
		if ((x - n < 1e-5 && x - n>0) || (n - x < 1e-5 && n - x>0)) {
			x=n;
			cout << x << endl;
			break;
		}
		x=n;
	}
	return 0;
}