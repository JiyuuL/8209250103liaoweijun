//#include <iostream>
//#include "title.h"
//using namespace std;
//
//bool is_prime(int num) {
//	int c;
//	if (num == 1) {
//		return 0;
//	}
//	if (num == 2) {
//		return 1;
//	}
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0) {
//			return  0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int a;
//	cin >> a;
//	bool res=is_prime(a);
//	if (res == 0) {
//		cout << a<<"不是素数" << endl;
//	}
//	if (res == 1) {
//		cout << a<<"是素数" << endl;
//	}
//	int num=1;//第一个素数是2
//	int count = 1;
//	cout << "2,";
//	for (int i = 3;num<=199; i++)//我也不知道为啥这里为什么不是num<=200 
//	{
//		if (is_prime(i) == 1) {
//			num++;
//			count++;
//
//			cout << i<<",";
//
//			if (count % 10 == 0) {
//				cout << endl;
//			}
//		}
//	}
//	
//	return 0;
//}