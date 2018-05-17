#include<stdio.h>

int bsearch(int array[], int len, int target) {
	int first=0;
	int last = len - 1;
	int mid;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (target == array[mid])
			return mid;
		else
		{
			if (target < array[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1; //ã�������� ���� ��°�
}
int main(){
	int array[] = {1,2,4,5,6,7,8,9};
	int idx;
	int target;
	puts("input sizeof array");
	scanf_s("%d", &target);

	idx=bsearch(array, sizeof(array)/sizeof(int), target);
	if (idx == -1)
		puts("Ž������");
	else
		printf("Ÿ�� �����ε���: %d", idx);
	return 0;

	

}