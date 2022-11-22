#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declarations
int searchMax(int arr[], int size);	// task 1
float avg(int arr[], int size);		// task 2
void firstLastPosSum(int arr[], int size);	// task 3

void randomNumbersArrayInRange(int ar[], int size, int min, int max);	// fills an array random numbers in the range
void printArray(int arr[], int size);	// print array

int main()
{
	srand(time(0));			// add random numbers
	int size = 10;			// add and initialization size array
	//===

	// Task 1.
	printf("Task 1.\n");

	int arrTaskOne[size];			// add and initialization array
	int min01 = -10, max01 = 10;	// range a random numbers
	randomNumbersArrayInRange(arrTaskOne, size, min01, max01);
	printArray(arrTaskOne, size);

	int resultFirstTask = searchMax(arrTaskOne, size);
	printf("Max element in array = %d\n\n", resultFirstTask);
	//===

	// Task 2.
	printf("Task 2.\n");

	int arrTaskTwo[size];		// add and initialization array
	int min02 = 0, max02 = 20;	// range a random numbers
	randomNumbersArrayInRange(arrTaskTwo, size, min02, max02);
	printArray(arrTaskTwo, size);

	float resultSeconTask = avg(arrTaskTwo, size);
	printf("Average = %.2f\n\n", resultSeconTask);
	//===

	// Task 3.
	printf("Task 3.\n");

	int arrTaskThree[size];			// add and initialization array
	int min03 = -20, max03 = 20;	// range a random numbers
	randomNumbersArrayInRange(arrTaskThree, size, min03, max03);
	printArray(arrTaskThree, size);

	firstLastPosSum(arrTaskThree, size);

	return 0;
}

// Fill array
void randomNumbersArrayInRange(int ar[], int size, int min, int max)
{
	int i;
	for(i = 0; i < size; i++)
	{
		ar[i] = min + rand()%(max + 1 - min);
	}
}
// Print array
void printArray(int ar[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

// Function for TASK 1
int searchMax(int arr[], int size)
{
	int maxIndex, max = 0;

	int i;
	for (i = 0; i < size; i++)
	{
		if(max <= arr[i])
		{
			max = arr[i];	// remember max value in index
			maxIndex = i;	// remember index
		}
	}
	return maxIndex;
}

// Function for TASK 2
float avg(int arr[], int size)
{
	int sum = 0, i;
	float average;

	for(i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	average = sum / i;

	return average;
}

// Function for Task 3
void firstLastPosSum(int arr[], int size)
{
	int sum = 0;
	int firstNum, lastNum, i, j;

	for(i = 0, j = size - 1;
			i < size && j >= 0;
			i++, j--)
	{
		if(arr[i] >= 0)
		{
			firstNum = arr[i];
		}
		lastNum = arr[j];
	}
	sum = firstNum + lastNum;

	printf("Sum = %d", sum);
}
