#include <stdio.h>

// declarations
void fan(int mode); 			// task 1
void amPm(float hour);			// task 2
void medtest(int puls, int age);// task 3


int main()
{
	// Task 1
	int mode = 15;
	fan(mode);

	// Task 2
	float hour = -12.59;
	amPm(hour);

	// Task 3
	int puls = 99;
	int age = 56;
	medtest(puls, age);

	return 0;
}

// Function for task 1
void fan(int mode)
{
	printf("Task 1.\n");

	if (mode == 1)
	{
		printf("Off\n\n");
		return;
	}

	if (mode == 2)
	{
		printf("Low\n\n");
		return;
	}

	if (mode == 3)
	{
		printf("Middle\n\n");
		return;
	}

	if (mode == 4)
	{
		printf("Hi\n\n");
		return;
	}

	if (mode < 1 || mode > 4)
	{
		printf("Wrong mode.\n\n");
		return;
	}
}

// Function for task 2
void amPm(float hour)
{
	printf("Task 2.\n");


	if ((hour >= 0.00 && hour <= 0.59) ||
			(hour >= 1.00 && hour < 1.60) ||
			(hour >= 2.00 && hour < 2.60) ||
			(hour >= 3.00 && hour < 3.60) ||
			(hour >= 4.00 && hour < 4.60) ||
			(hour >= 5.00 && hour < 5.60) ||
			(hour >= 6.00 && hour < 6.60) ||
			(hour >= 7.00 && hour < 7.60) ||
			(hour >= 8.00 && hour < 8.60) ||
			(hour >= 9.00 && hour < 9.60) ||
			(hour >= 10.00 && hour < 10.60) ||
			(hour >= 11.00 && hour < 11.60))
	{
		printf("ante merediem\n\n");
		return;
	}
	else if ((hour >= 12.00 && hour < 12.60) ||
			(hour >= 13.00 && hour < 13.60) ||
			(hour >= 14.00 && hour < 14.60) ||
			(hour >= 15.00 && hour < 15.60) ||
			(hour >= 16.00 && hour < 16.60) ||
			(hour >= 17.00 && hour < 17.60) ||
			(hour >= 18.00 && hour < 18.60) ||
			(hour >= 19.00 && hour < 19.60) ||
			(hour >= 20.00 && hour < 20.60) ||
			(hour >= 21.00 && hour < 21.60) ||
			(hour >= 22.00 && hour < 22.60) ||
			(hour >= 23.00 && hour < 23.60))
	{
		printf("post merediem\n\n");
		return;
	}
	else
	{
		printf("Incorrect input\n\n");
	}
}

// Function for task 3
void medtest(int pulse, int age)
{
	printf("Task 3.\n");

	if ( ((age > 0 && age < 35) && (pulse > 40 && pulse < 120)) ||
			((age  >= 35 && age <= 55) && (pulse > 40 && pulse < 110)) ||
			((age > 55) && (pulse > 40 && pulse < 100)) )
	{
		printf("Medical test passed!\n\n");
		return;
	}
	else
	{
		printf("Medical test failed!\n\n");
	}
}
