#include<iostream>
using namespace std;
   
//判断素数函数
bool is_prime(int num){
	if (num == 1) {
		return false;
	}
	if (num == 2) {
		return true;
	}
	if (num != 2 && num % 2 == 0) {
		return false;
	}
	for (int i = 3; i <=num/2 ; i += 2) {
		if (num % i == 0) {
			return false; 
		}
     }
	return true;
}
//循环判断前两百中的素数
//每行10个输出
int main(){
	int count = 0;
	int num = 1;
	while (num <= 200) {
		if (is_prime(num)) {
			cout <<num<<" ";
			count++;
		}
		if (count == 10) {
			cout << endl;
			count = 0;
		}
		num++;
	}
	return 0;


}
