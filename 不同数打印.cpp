#include<iostream>
using namespace std;
int main() {
	int arr[10];
	int distinct[10];
	int dn = 0;
	cout << "Enter ten numbers: "; 
	//1.ÊäÈëÊý×é
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		bool isunique = true;
		for (int j = 0; j < dn;j++) {
			if (distinct[j] == arr[i]) {
				isunique = false;
				break;
			}
		}
		if (isunique) {
			distinct[dn] = arr[i];
			dn++;
		}
	}
	cout << "The distinct numbers are : ";
	for (int i = 0; i < dn; i++) {
		cout << distinct[i] << " ";
		
	}

}