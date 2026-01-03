#include <iostream>
using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int sec;

public:
	void set_hour() {
		cin >> hour;
	}
	void set_minute() {
		cin >> minute;
	}
	void set_sec() {
		cin >> sec;
	}

	void cout_hour() {
		cout << hour << ":";
	}
	void cout_minute() {
		cout << minute << ":";
	}
	void cout_sec() {
		cout << sec;
	}
};

int main()
{
	Time t1;          
	t1.set_hour();
	t1.set_minute();
	t1.set_sec();
	t1.cout_hour();
	t1.cout_minute();
	t1.cout_sec();

	return 0;
}