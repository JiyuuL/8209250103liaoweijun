#include <iostream>
using namespace std;

int parseHex(const char* const hexString) {
    int a = 0; 

    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        int num; 

        if (c >= '0' && c <= '9') {
            num = c - '0'; 
        }
        else if (c >= 'A' && c <= 'F') {
            num= 10 + (c - 'A'); 
        }
        else if (c >= 'a' && c <= 'f') {
            num = 10 + (c - 'a'); 
        }
        
        a = a * 16 + num;
    }

    return a;
}


int main() { 
    char str[100];

    cout << "请输入一个16进制字符串（支持0-9、a-f、A-F）：";
    cin >> str;

    int res = parseHex(str);

    cout << "16进制字符串 \"" << str << "\" 对应的10进制数为：" << res<< endl;

    return 0;
}