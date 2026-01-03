#include <iostream>
using namespace std;

class point {
private:
	double x;
	double y;

public:
	point() {
		x = 60;
		y = 80;
	}

	void setPoint(int i, int j) {
		x = x + i;
		y = y + y;
	}

	void display() {
		cout << "(" << x << "," <<  y << ")" << endl;
	}
};





int main() {
	point p;
	p.setPoint(3,4);
	p.display();

	return 0;
}
