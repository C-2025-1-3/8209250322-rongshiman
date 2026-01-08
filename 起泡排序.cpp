#include<iostream>
#include<iomanip>
using namespace std;
void swap(double a, double b) {
	double temp = a;
	a = b;
	b = temp;
}
void bub(double list[], int listsize) {
	bool chan = true;
	do {
		chan = false;
		for (int j = 0; j < listsize - 1; j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);
				chan = true;
			}
		}
	} while (chan);
}
int main() {
	const int size = 10;
	double arr[size];
	cout << "please input 10 num:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];

	}
	bub(arr, size);
	cout << "changed:" << endl;
	cout << fixed << setprecision(2);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";

	}
	return 0;
}

