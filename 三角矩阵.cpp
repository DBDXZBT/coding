#include<iostream>
using namespace std;
int main() {
	int n = 0,j=0,k=0,l=0;
	cin >> n;
	if (n % 2 != 0 && (n >= 2 && n <= 80)) {
		l = n;
		for (int i = 0; i < ((n +1)/ 2 );i++) {

			for (j = 0; j <( l / 2);j++) {
				cout << " ";
			}
			for (k = 0; k < ((n-l) + 1); k++) {
				cout << "*";
			}
			l -= 2;
			cout << endl;
		}
	}
	return 0;
}