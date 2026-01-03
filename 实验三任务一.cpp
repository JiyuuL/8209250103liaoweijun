//#include <iostream>
//using namespace std;
//
//int max(int a,int b) {
//	 int c = a >= b ? a : b;
//	 for (int i = c; i >= 2;i--) {
//		if (a % i == 0 && b % i == 0) {
//			c = i;
//			break;
//		}
//	}
//	 return c;
//}
//
//int min(int a, int b) {
//	int c = a >= b ? a : b;
//	for (int i = c; ; i++) {
//		if (i % a == 0 && i % b == 0) {
//			c = i;
//			break;
//		}
//	}
//	return c;
//}
//int main() {
//	int a, b;
//	cin >> a >> b;
//	int c=max(a, b);
//	int d = min(a, b);
//	cout << "最大公因数是：" << c << endl;
//	cout << "最小公倍数是：" << d << endl;
//	return 0;
//}