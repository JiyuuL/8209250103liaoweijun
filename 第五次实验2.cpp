#include <iostream>
using namespace std;

//main.cpp                      主函数模块             //将类声明头文件包含进来
#include "student.h"


int main()
{
	Student stud;                //定义对象
	Student stud1;

	cout << "请输入stud的学号、姓名、性别（空格分隔）：" << endl;
	stud.set_value();
	cout << "请输入stud1的学号、姓名、性别（空格分隔）：" << endl;
	stud1.set_value();


	cout << "stud的信息：" << endl;
	stud.display();
	cout << "stud1的信息：" << endl;
	stud1.display();              //执行stud对象的display函数
	return 0;
}