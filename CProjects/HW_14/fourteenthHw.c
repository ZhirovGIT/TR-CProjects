#include <stdio.h>

// Declarations
int sumEvenIndexElements(int ar[], int size);	// task 1
int sumEvenElements(int ar[], int size);		// task 2
void changeElements(int ar[], int size);		// task 3
void mergeArrays(int ar1[], int ar2[], int size1, int size2);	// task 4

void printArray(int ar[], int size);			// print arrays

int main()
{
	int size01, size02, size03;

	int ar01[5] = { 0, 1, 2, 3, 4 };	// for tasks 1, 4
	int ar02[5] = { 5, 6, 7, 8, 9 };	// for tasks 2, 3
	int ar03[5] = { 5, 6, 7, 8, 9 };	// for task 4

	size01 = sizeof(ar01) / sizeof(int);// for tasks 1, 4
	size02 = sizeof(ar02) / sizeof(int);// for tasks 2, 3
	size03 = sizeof(ar03) / sizeof(int);// for task 4

	// Task 1
	printf("Task 1.\n");
	printArray(ar01, size01);

	int res01 = sumEvenIndexElements(ar01, size02);
	printf("Sum of even array elements: %d \n\n", res01);

	// Task 2
	printf("Task 2.\n");
	printArray(ar02, size02);

	int res02 = sumEvenElements(ar02, size02);
	printf("Sum of even array elements: %d \n\n", res02);

	// Task 3
	printf("Task 3.\n");
	printArray(ar02, size02);

	changeElements(ar02, size02);

	// Task 4
	printf("Task 4.\n");
	printArray(ar01, size01);
	printf("and\n");
	printArray(ar03, size03);

	mergeArrays(ar01, ar03, size01, size03);


	return 0;
}

// Function for TASK 1
int sumEvenIndexElements(int ar[], int size)
{
	int sum = 0;

	int i;
	for (i = 0; i < size; i+=2)
	{
		sum += ar[i];
	}
	return sum;
}

// Function for TASK 2
int sumEvenElements(int ar[], int size)
{
	int sum = 0;

	int i;
	for (i = 0; i < size; i++)
	{
		if(ar[i] % 2 == 0) sum+= ar[i];
	}

	return sum;
}

// Function for TASK 3
void changeElements(int ar[], int size)
{
	printf("Change ARRAY -> ");
	int i;
	for (i = 0; i < size; i++)
	{
		if (ar[i] % 2 == 0) ar[i] = 0;
		else ar[i] = 1;
		printf("[%d] ", ar[i]);
	}
	printf("\n\n");
}

// Function for TASK 4
void mergeArrays(int ar1[], int ar2[], int size1, int size2)
{
	printf("Merge ARRAY -> ");
	int arMerge[10];

	int i, j;

	// STARTING MERGE
	// get ar1[]
	for (i =0; i < size1; i++)
	{
		arMerge[i] = ar1[i];
	}

	// get ar2[]
	for (j = i; j < i + size2; j++)
	{
		arMerge[j] = ar2[j];
	}
	// ENDING MERGE

	// print arMerge[10]
	for (i = 0; i < size1 + size2; i++)
	{
		printf("[%d] ", arMerge[j]);
	}
}

// Function -  print arrays
void printArray(int ar[], int size) {
	printf("ARRAY -> ");
	int i;
	for (i = 0; i < size; i++) {
		printf("[%d] ", ar[i]);
	}
	printf("\n");
}
