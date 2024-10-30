#include<iostream>
using namespace std;
int main() {
	int n = 0, s = 0;
	int a = 0, b = 0, c = 0;
	cin >> n;
	if (n > 100 && n < 1000) {
		for (s = 100; s <= n; s++) {
			a = s / 100;
			b = (s / 10) % 10;
			c = s % 10;
			if (s == (a * a * a + b * b * b + c * c * c)) {
				cout << s<<endl;
			}
		}
	}
	return 0;
}