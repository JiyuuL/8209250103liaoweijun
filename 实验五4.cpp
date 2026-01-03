#include <iostream>
using namespace std;





class student {
private:
	int num;
	int score;


public:
	void set_num() {
		cout << "请输入学号" << endl;
		cin >> num;
	}
	void set_score() {
		cout << "请输入分数" << endl;
		cin >> score;
	}

	int max(student arr[]) {
		int max_score = arr[0].score;
		int max_num = arr[0].num;
		for (int i = 1; i < 5; i++) {
			if (arr[i].score > max_score) {
				max_score = arr[i].score;
				max_num = arr[i].num;
			}
		}
		return max_num;
	}
	
};



int main() {
	student arr[5];
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "个学生 " << endl;
		arr[i].set_num();
	}

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "个学生 " << endl;
		arr[i].set_score();
	}

	int max_num= arr[0].max(arr);
	cout << "最高分的学号：" << max_num << endl;


	return 0;
}