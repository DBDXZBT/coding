#include<stdio.h>
int gys(int x, int y);
int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a > 0 && b < 1000000) {
		int num = gys(a, b);
		printf("%d", num);
		printf(" ");
		printf("%d", (a * b) / num);
	}
}
int gys(int x, int y) {
	int temp = 0;
	while (x != 0) {
		temp = x;
		x = y % x;
		y = temp;
	}
	return temp;
}
