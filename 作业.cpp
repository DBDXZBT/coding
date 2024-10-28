#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	while (true) {
		int f = 0;
		double c = 0.0;
		cin >> f;
		if (f >= -1000 && f <= 1000) {
			c = (5*(f - 32)) / 9.0;
			cout <<fixed<<setprecision(1)<< c;
			return 0;
		}
		
	}
	return 0;
}
