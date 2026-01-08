
#include<iostream>
using namespace std;//求最大公约数
int gy(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int gb(int x, int y) {
	 return( x * y)/gy(x,y);	
	
}
int main() {
	int m=0, n=0;
	cout << "请输入两个自然数:";
	cin >> m>> n;
	cout << "你输入的两个数的最大公约数为:" << gy(m, n)<<endl;
	cout << "你输入的两个数的最小公倍数为:" << gb(m, n)<<endl;
	return 0;
}