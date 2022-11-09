#include <stdio.h>

// Declarations
int sumOddDigits(int number);	// Function for task 1
int factorial(int number);		// Function for task 2
void printReverseNumber(int number);	// Function for task 3
int reverseNumber(int number);	// Function for task 4

int main()
{
	int number;

	// Task 1.
	printf("Task 1.\n");
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	int result01 = sumOddDigits(number);
	printf("Sum of the odd digits of your number: %d\n\n", result01);

	// Task 2.
	printf("Task 2.\n");
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	int result02 = factorial(number);
	printf("Factorial of number is: %d\n\n", result02);

	// Task 3.
	printf("Task 3.\n");
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	printReverseNumber(number);

	// Task 4.
	printf("Task 4\n");
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	int result04 = reverseNumber(number);
	printf("Reverse of number: %d\n\n", result04);

	return 0;
}

// Function for TASK 1
int sumOddDigits(int number)
{
	int sumOdd = 0;

	// Exception
	if (number < 0)
	{
		printf("Wrong number!!!\n\n");
		return -1;
	}

	// While there are digits left process
	while (number != 0)
	{
		if (number % 2 == 1) sumOdd += number % 10;	// If current digit is odd positioned
		number /= 10;								// Remove last digit
	}

	return sumOdd;
}

// Function for TASK 2
int factorial(int number)
{
	int result = 1;

	// Exceptions
	if (number <= 0)
	{
		printf("Wrong number!!!\n\n");
		return -1;
	}
	else if (number == 0)return 1;

	do
	{
		result *= number;	// The product of each decrement number
		number--;			// Decrement
	} while (number != 0);

	return result;
}

// Function for TASK 3
void printReverseNumber(int number)
{
	/*
	 * Option 1
	 *
	 * int reverse = 0;
	 *
	 * if (number <= 0)
	 * {
	 * 		printf("Wrong number!!!\n\n");
	 * 		return;
	 * }
	 *
	 * while (number > 0)
	 * {
	 * 		reverse = (reverse * 10) + (number % 10);	// Increase the rank and add find the last digit
	 * 		number /= 10;	// Remove last digit
	 * }
	 * printf("Reverse of number: %d\n\n", reverssResult);
	*/

	// Option 2
	int reverssResult = reverseNumber(number);
	printf("Reverse of number: %d\n\n", reverssResult);

	return;
}

int reverseNumber(int number)
{
	int reverse = 0;

	if (number % 10 == 0)
	{
		printf("Wrong number!!!\n\n");
		return -1;
	}
	else if (number <= 0)
	{
		printf("Wrong number!!!\n\n");
			return -1;
	}

	while (number > 0)
	{
		reverse = (reverse * 10) + (number % 10);	// Increase the rank and add find the last digit
		number /= 10;	// Remove last digit
	}

	return reverse;
}
