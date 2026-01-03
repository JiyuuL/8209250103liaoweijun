#include <iostream>
using namespace std;

int main() {  
	int arr[10] = { 0 };
	int input[10];
	bool NEW;
	int num = 0;
	
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < 10;i++) {
		cin >> input[i];
	}//ÊäÈë10¸öÊı


	for (int i = 0; i < 10; i++) {
		NEW = true;
		for (int k = 0; k < num; k++) {
			if (input[i] == arr[k]) {
				NEW = false;
				break;
			}
		}
		if (NEW) {
			arr[num] = input[i];
			num++;
		}
	}
	
	cout << "The distinct numbers are:";
	for (int j = 0; j < num; j++) {
		cout << arr[j] << " ";
	}

	return 0;
}