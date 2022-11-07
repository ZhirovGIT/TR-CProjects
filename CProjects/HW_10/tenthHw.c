#include <stdio.h>

// Declarations
int evenDigitsCount (int number);	// for task 1
int sumDigits (int number);			// for task 2
int xPower (int x, int power);		// for task 3

int main()
{
	int number, x, power, res01, res02, res03;

	// Task 1.
	printf("Task 1.\n");

	printf ("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	res01 = evenDigitsCount(number);
	printf("Count of even digits: %d\n\n", res01);

	// Task 2.
	printf("Task 2.\n");

	printf ("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	res02 = sumDigits(number);
	printf("Sum of digits: %d\n\n", res02);

	// Task 3.
	printf("Task 3.\n");

	printf ("Enter the number: ");
	fflush(stdout);
	scanf("%d", &x);

	printf ("Enter the degree of the number: ");
	fflush(stdout);
	scanf("%d", &power);

	res03 = xPower(x, power);
	printf("Result: %d", res03);

	return 0;
}

// Function for task 1.
int evenDigitsCount (int number)
{
	int count = 0;

	if(number < 0)
	{
		printf("Wrong number!\n");
		return -1;
	}
	// if (number < 0) number = -number;

	do
	{
		if (number % 2 == 0) count++;
		number /= 10;
	} while (number != 0);

	return count;
}

// Function for task 2.
int sumDigits (int number)
{
	int sum = 0;

	do
	{
		sum += number % 10;
		number /= 10;
	} while (number != 0);

	return sum;
}

// Function for task 3.
int xPower (int x, int power)
{
	// Option 1
	/*
		int count = 2;
		if (power == 0) return 1;
		else if (power == 1) return x;
		else if (x == 0 && power == 0)
		{
			printf("ERROR!\n");
			return -1;
		}
		do
		{
			x *= x;
			count++;
		} while (count != power);
	*/

	// Option 2
	int result = 1;

	if (power == 0)
	{
		printf("Result: %d", x = 1);
		return 1;
	}

	do
	{
		result *= x;
		power--;
	} while (power != 0);

	return result;
}
