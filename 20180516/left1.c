#include<stdio.h>

int main() {
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 }, result[10], i;
	for (i = 0; i < 10; i++) {
		if (i == 9) {
			result[9] = array[0];
			break;
		}
		result[i] = array[i + 1];

	}
	for (i = 0; i < 10; i++)
		printf("%d", result[i]);
}