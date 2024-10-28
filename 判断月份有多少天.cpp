#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	if ((0 <= a&&a<= 10000) && (1 <= b&&b<= 12)) {
		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
			if (b==4||b==6||b==9||b==11) {
				cout << "30";
			}
			else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12) {
				cout << "31";
			}
			else {
				cout << "29";
			}
		}
		else {
			if (b == 4 || b == 6 || b == 9 || b == 11) {
				cout << "30";
			}
			else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
				cout << "31";
			}
			else {
				cout << "28";
			}
		}
	}
	else {
		cout << "Error!";
	}
}
