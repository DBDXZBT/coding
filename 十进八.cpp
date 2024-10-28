#include<iostream>
int jieguo[32];
void eight(int x);
int main() {
	int num = 0;
	while (true) {
		std::cin >> num; 
		if (num >= 0) {
			eight(num);
			return 0;
		}

	}
	return 0;
}
void eight(int x) {
	int i = 0;
	while (x>0) {
		jieguo[i] = x % 8;
		x /= 8;
		++i;
	}
	for (int j = i-1; j<=i && j>=0; j--) {
		std::cout << jieguo[j];
	}
}
