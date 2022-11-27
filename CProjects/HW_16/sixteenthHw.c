#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declarations
void fillArray(int arr[], int size, int min, int max);
void printArray(int arr[], int size);
void swap(int arr[], int i, int j);
void bubbleSort(int ar[], int size);
void selectSort(int ar[], int size);

void sortReverse(int arr[], int size);	// Task 1
void sortInRange(int arr[], int size, int start, int finish);	// Task 2
void evenFirst(int arr[], int size);	// Task 3
void evenFirstAdv(int arr[], int size);	// Task 4


int main()
{
	// Initial array
	int size = 10, min = -50, max = 50;
	int arr[size];
	//=================================

	// TASK 1
	printf("Task 1.\n");
	fillArray(arr, size, min, max);
	printArray(arr, size);

	printf("Bubble sort reverse -> ");
	sortReverse(arr, size);
	printArray(arr, size);
	printf("\n");
	//=================================

	// TASK 2
	printf("Task 2.\n");
	fillArray(arr, size, min, max);
	printArray(arr, size);

	int start = 0, finish = 5;
	printf("Select sort in range-> ");
	sortInRange(arr, size, start, finish);
	printArray(arr, size);
	printf("\n");
	//=================================

	// TASK 3
	printf("Task 3.\n");
	fillArray(arr, size, min, max);
	printArray(arr, size);

	printf("Even first, odd second-> ");
	evenFirst(arr, size);
	printArray(arr, size);
	printf("\n");
	//=================================

	// TASK 4
	printf("Task 4.\n");
	fillArray(arr, size, min, max);
	printArray(arr, size);

	printf("Even first up, odd second down -> ");
	evenFirstAdv(arr, size);
	printArray(arr, size);

	return 0;
}

//	Task 1.
//================================================
void sortReverse(int arr[], int size)
{
	int i, j;
	int min_i, min_e;

	// Bubble
//	for (i = 0; i < size - 1; i++)
//	{
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] < arr [j+1]) swap(arr, j, j+1);	// change '>' to '<'
//		}
//	}

	// Select
	for (i = 0; i < size - 1; i++)
	{
		min_e = arr[i];
		min_i = i;

		for (j = 1 + i; j < size; j++)
		{
			if (arr[j] > min_e)		// swap '<' to '>'
			{
				min_e = arr[j];
				min_i = j;
			}
		}
		if(i != min_i) swap(arr, i, min_i);
	}
}
//================================================

// Task 2.
//================================================
void sortInRange(int arr[], int size, int start, int finish)
{
	if(start < 0 || finish >= size || start > finish)
	{
		printf("ERROR!!!\n");
		return;
	}

	int i, j;
	int min_i, min_e;

	// Bubble
//	for (i = 0; i < size - 1; i++)
//	{
//		for (j = start; j <= finish - i - 1; j++)	// add start and finish
//		{
//			if (arr[j] > arr[j+1]) swap(arr, j, j+1);
//		}
//	}

	// Select
	for(i = start; i < size - 1; i++)	// add start
	{
		min_e = arr[i];
		min_i = i;

		for (j = i + 1; j <= finish; j++)	// add finish
		{
			if (arr[j] < min_e)
			{
				min_e = arr[j];
				min_i = j;
			}
		}
		if (i != min_i) swap (arr, i, min_i);
	}
}
//================================================

// Task 3
//================================================
void evenFirst(int arr[], int size)
{
	int i, j;
	int min_i, min_e;

	// Bubble
//	for (i = 0; i < size - 1; i++)
//	{
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			if (arr [j] % 2 != 0) swap(arr, j, j+1);	// even first (not ascending)
//		}
//	}

	// Select
	for (i = 0; i < size - 1; i++)
	{
		min_i = i;
		min_e = arr[i];

		for (j = i + 1; j < size; j++)
		{
			if (arr[j] % 2 == 0)	// even first (not ascending)
			{
				min_e = arr[j];
				min_i = j;
			}
		}
		if (i != min_i) swap (arr, i, min_i);
	}
}
//================================================

// Task 4
//================================================
void evenFirstAdv(int arr[], int size)
{
	int i, j;

	// Bubble
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if(arr[j] > arr[j+1]) swap(arr, j, j+1);
			if(arr[j] % 2 != 0) swap(arr, j, j+1);	// even first up & odd second down
		}
	}
}
//================================================

void selectSort(int arr[], int size)
{
	int i, j, min_i, min_e;

	for (i = 0; i < size - 1; i++)
	{
		min_i = i;
		min_e = arr[i];

		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < min_e)
			{
				min_e = arr[j];
				min_i = j;
			}
		}
		if (i != min_i) swap(arr, i, min_i);
	}
}

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
