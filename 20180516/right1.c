#include<stdio.h>

int main() {
	int array[10], result[10], i;
	for (i = 0; i < 10; i++)
		array[i] = i + 1;
	for (i = 0; i < 10; i++) {
		result[i + 1] = array[i];
		if (i == 9)
			result[0] = array[i];
	}
	for (i = 0; i < 10; i++)
		printf("%d", result[i]);
}