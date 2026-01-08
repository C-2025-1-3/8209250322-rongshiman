#include <iostream>
#include <iomanip>
using namespace std;


void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; ++j) {
            if (list[j] > list[j + 1]) {

                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    const int SIZE = 10;
    double arr[SIZE];
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    bubbleSort(arr, SIZE);

    cout << "排序后的数组：" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}