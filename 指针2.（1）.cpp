#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) return -1;
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) break;
        }
        if (j == len1) return i;
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    cout << "请输入子串s1：";
    cin >> s1;
    cout << "请输入主串s2：";
    cin >> s2;
    cin.ignore();
    cin.getline(s2, 100);
    int pos = indexof(s1, s2);
    if (pos != -1) {
        cout << "子串在主串中的起始下标是：" << pos << endl;
    }
    else {
        cout << "子串不是主串的一部分" << endl;
    }
    return 0;
}