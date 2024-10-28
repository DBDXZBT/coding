#include<iostream>
using namespace std;
void kuohao(int x);//声明自定义函数“kuohao”
int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	cout << a << "+"; kuohao(b); cout << "=" << a + b << endl;//此处“kuohao”函数不能加入cout流中，独立存在
	cout << a << "*"; kuohao(b); cout << "=" << a * b << endl;//自定义函数kuohao（int x），使用kuohao（b）会自动将b替换为x执行操作
	cout << a << "/"; kuohao(b); cout << "=" << a / b << endl;
	cout << a << "%"; kuohao(b); cout << "=" << a % b << endl;
	return 0;
}
void kuohao(int x) {//if函数判断x是否为负数，若为负数则执行加括号操作//void代表无返回值，所以不需要return 0
	if (x < 0) {
		cout << "(" << x << ")";
	}
	else
		cout << x;
}