//#include <iostream>
//using namespace std;
//#include "mytriangle.h"
//#include <cmath>
//
//bool is_valid(double side1, double side2, double side3) {
//	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
//		cout << "能构成三角形" << endl;
//	}
//	else {
//		cout << "不能构成三角形" << endl;
//		return 0;
//	}
//	return 1;
//}
//
//double area(double side1, double side2, double side3) {
//	double s = (side1 + side2 + side3) / 2;
//	cout << sqrt(s * (s - side1) * (s - side2) * (s - side3)) << endl;;
//	return 0;
//}
//
//
//int main() {
//	double a, b, c;
//	cin >> a >> b >> c;
//	bool res=is_valid(a, b, c);
//	if (res == 1) {
//		area(a, b, c);
//	}
//	return 0;
//}