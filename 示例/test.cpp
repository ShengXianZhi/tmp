#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

int main(void) {
	char a;
	
	cout << "请输入一个字符：";
	cin >> a;
	

		 if (a >= 'a' && a <= 'z') {
			 a = a - 'a' + 'A';
		 }
		 else if (a >= 'A' && a <= 'Z') {
			 a = a - 'A' + 'a';
		 }
		 else {
			 cout << "输入无效" << endl;
		 }

	
		 cout << a << endl;

	

	system("pause");
	return 0;

}