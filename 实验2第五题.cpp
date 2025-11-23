//5、输入一行字符，分别统计出其中英文字母、空格、数字字符和其它字符的个数。



//#include <iostream>
//using namespace std;
//int main() {
//    int letter = 0, space = 0, num = 0, other = 0;
//    cout << "请输入一串字符串" << endl;
//    char ch;
//    cin >> noskipws;
//    while (cin >> ch && ch != '\n') {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//            letter++;
//        }
//        else if (ch == ' ') {
//            space++;
//        }
//        else if (ch >= '0' && ch <= '9') {
//            num++;
//        }
//        else {
//            other++;
//        }
//    }
//    cout << "字母：" << letter << "  空格：" << space << "  数字：" << num << "  其他：" << other << endl;
//    return 0;
//}