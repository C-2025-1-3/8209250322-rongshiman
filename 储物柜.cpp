#include<iostream>
using  namespace std;
int main() {
	const int Lock = 100;
	bool locks[Lock + 1] = { false };
	for (int stu = 1; stu <= Lock; stu++) {
		for (int lock = stu; lock <= Lock; lock+= stu) {
			locks[lock] = !locks[lock];
		}
	}
	cout << "open:";
	for (int i = 1; i <= Lock; i++) {
		if (locks[i]) {
			cout << i << " ";
		}
	}
	return 0;
}