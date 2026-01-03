#include <iostream>
using namespace std;


void change(bool CASE[],int i) {
	CASE[i] = !CASE[i];
}

int main() {
	bool CASE[100] = { false };//false是关闭，true是开
	

	for (int stu = 1; stu <=100; stu++) {
		for (int i = stu - 1; i < 100;i= i + stu) {
			change(CASE, i);
		}
	}



	for (int i = 0; i < 100; i++) {
		cout << CASE[i] << " ";
	}

	return 0;
}