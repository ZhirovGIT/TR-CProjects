#include <stdio.h>

// Declarations
int evenDigitsCount (int number);	// for task 1
int sumDigits (int number);			// for task 2
int xPower (int x, int power);		// for task 3

int main()
{
	int number, x, power;

	// Task 1.
	printf("Task 1.\n");

	printf ("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	evenDigitsCount(number);

	// Task 2.
	printf("Task 2.\n");

	printf ("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	sumDigits(number);

	// Task 3.
	printf("Task 3.\n");

	printf ("Enter the number: ");
	fflush(stdout);
	scanf("%d", &x);

	printf ("Enter the degree of the number: ");
	fflush(stdout);
	scanf("%d", &power);

	xPower(x, power);

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

	while (number != 0)
	{
		if (number % 2 == 0) count++;
		number /= 10;
	}
	printf("Count of even digits: %d\n\n", count);

	return count;
}

// Function for task 2.
int sumDigits (int number)
{
	int sum = 0;

	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}
	printf("Sum of digits: %d\n\n", sum);


	return sum;
}

// Function for task 3.
int xPower (int x, int power)
{
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
	printf("%d", x);

	return x;
}
