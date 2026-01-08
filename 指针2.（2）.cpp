#include <iostream>
#include <cstring>
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; ++i) {
        char c = hexString[i];
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        }
        else if (c >= 'a' && c <= 'f') {
            val = 10 + (c - 'a');
        }
        else {
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hexStr[20];
    cout << "Enter a hexadecimal string: ";
    cin >> hexStr;
    int decVal = parseHex(hexStr);
    cout << "Decimal value: " << decVal << endl;
    return 0;
}