#include <iostream>
using namespace std;

int peach(int day) {
	if (day == 10) {
		return 1;
	}
	return (peach(day + 1) + 1) * 2;
}

int main() {
	int num = peach(1);
	cout << num << endl;
	return 0;
}