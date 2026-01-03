#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    for (int i = 0; i<10; i++) {
        int j = 0; 
        int k = i; 
        
   
        while (s1[j] == s2[k]) {
            j++; 
            k++; 
        }
        
        if (j==9&&s1[j]==s2[k]) {
            return i;
        }
    }
    return -1;
}



int main() {
        char s1[10], s2[10];

        
        cout << "请输入子串s1：";
        cin >> s1;
        cout << "请输入主串s2：";
        cin >> s2;


        int res = indexOf(s1, s2);


        if (res != -1) {
            cout << "s1是s2的子串，在s2中的下标为：" << res << endl;
        }
        else {
            cout << "s1不是s2的子串" << endl;
        }

	return 0;
}