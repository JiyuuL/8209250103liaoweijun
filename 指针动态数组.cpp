#include <iostream>
using namespace std;

void change(int p[],int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp; 
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	int* p = new int[n] {};
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}

	delete[]p;
	return 0;
}