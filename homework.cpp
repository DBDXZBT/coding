#include<iostream>
using namespace std;
void kuohao(int x);//�����Զ��庯����kuohao��
int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	cout << a << "+"; kuohao(b); cout << "=" << a + b << endl;//�˴���kuohao���������ܼ���cout���У���������
	cout << a << "*"; kuohao(b); cout << "=" << a * b << endl;//�Զ��庯��kuohao��int x����ʹ��kuohao��b�����Զ���b�滻Ϊxִ�в���
	cout << a << "/"; kuohao(b); cout << "=" << a / b << endl;
	cout << a << "%"; kuohao(b); cout << "=" << a % b << endl;
	return 0;
}
void kuohao(int x) {//if�����ж�x�Ƿ�Ϊ��������Ϊ������ִ�м����Ų���//void�����޷���ֵ�����Բ���Ҫreturn 0
	if (x < 0) {
		cout << "(" << x << ")";
	}
	else
		cout << x;
}