#include<stdio.h>

int main() {
	int a = 11001, dex = 0, i, b = 1;
	for (i = 0; i < 5; i++) {
		dex += (a % 10)*b;
		a /= 10;
		b *= 2;
	}
	printf("%d", dex);
}