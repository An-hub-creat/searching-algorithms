// C Program to implement linear search using recursion
#include <stdio.h>

int linearSearch(int* arr, int size, int key)
{
	if (size == 0)
		return -1;

	if (arr[size - 1] == key) {
		return size - 1;
	}

	return linearSearch(arr, size - 1, key);
}
int main()
{
	int arr[5] = { 6, 7, 9, 1, 5, 8, 12, 2, 3 };
	int size = sizeof(arr) / sizeof(int);
	int key = 4;

	int index = linearSearch(arr, size, key);

	if (index == -1) {
		printf("The element is not present in the list.");
	}
	else {
		printf("The element is present at arr[%d].", index);
	}

	return 0;
}
