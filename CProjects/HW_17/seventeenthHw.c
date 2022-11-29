#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Basic declarations
void fillArray(int arr[], int size, int min, int max);
void printArray(int arr[], int size);
void swap(int arr[], int i, int j);
void bubbleSort(int ar[], int size);

void oddFirst(int arr[], int size);	// Task 1
int isSorted(int arr[], int size);	// Task 2
int searchAdv(int arr[], int size, int number);	// Task 3

int main()
{
	// Initial array
	int size = 15, min = -50, max = 50;
	int arr[size];
	int number = 7;	// for task 3
	//=================================

	// TASK 1
	printf("Task 1.\n");

	fillArray(arr, size, min, max);
	printArray(arr, size);

	oddFirst(arr, size);
	printArray(arr, size);
	printf("\n");
	//=================================

	// TASK 2
	printf("Task 2.\n");

	fillArray(arr, size, min, max);
	printArray(arr, size);
	printf("Check sorting in ascending order... Result: %d\n", isSorted(arr, size));

	fillArray(arr, size, min, max);
	bubbleSort(arr, size);
	printArray(arr, size);
	printf("Check sorting in ascending order... Result: %d\n\n", isSorted(arr, size));

	// TASK 3
	printf("Task 3.\n");

	fillArray(arr, size, min, max);
	bubbleSort(arr, size);
	printArray(arr, size);

	int res = searchAdv(arr, size, number);
	if(res != -1)
	{
		printf("Found an element in the array. Result: %d", res);
	}
	else
	{
		printf("Array element not found. Result: %d", res);
	}

	return 0;
}

// Task 1
void oddFirst(int arr[], int size)
{
	// Bubble sort
	int i, j;
	for(i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - i - 1; j++)
		{
			if(arr[j] % 2 == 0) swap(arr, j, j+1);	// odd first
		}
	}
}

// Task 2
int isSorted(int arr[], int size)
{
	int i;
	for (i = 1; i < size; i++)
	{
		if(arr[i] > arr[i+1]) return 0;
	}
	return 1;
}

// Task 3
int searchAdv(int arr[], int size, int number)
{
	int left = 0;
		int right = size - 1;
		int count = 0;

		while (left <= right)
		{
			int middle = (left+right)/2;

			count++;

			if (arr[middle] == number) return arr[middle - size];	// search INDEX
			else if(arr[middle] < number) left = middle + 1;
			else if(arr[middle] > number) right = middle - 1;
		}
		return -1;

	return 0;
}

//==================================
void bubbleSort(int arr[], int size)
{
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr [j+1]) swap(arr, j, j+1);
		}
	}
}

void swap(int arr[], int i, int j)
{
	int buf = arr[i];
	arr[i] = arr[j];
	arr[j] = buf;
}

void fillArray(int arr[], int size, int min, int max)
{
	srand(time(0));
	int i;
	for(i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max + 1 - min);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("[%d] ", arr[i]);
	}
	printf("\n");
}

