#include <iostream>
using namespace std;

class cuboid {
private:
	double length;
	double width;
	double height;

public:
	void set() {
		cout << "请输入长宽高" << endl;
		cin >> length >> width >> height;
	}

	void get_volume() {
		cout << "体积是：" << (length * width * height) << endl;
	}
};

int main() {
	cuboid a,b,c;

	a.set();
	b.set();
	c.set();

	a.get_volume();
	b.get_volume();
	c.get_volume();

	return 0;
}