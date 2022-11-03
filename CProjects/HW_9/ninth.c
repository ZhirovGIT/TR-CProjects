#include <stdio.h>

// Declarations
int delayTime(float hour); // for task 1
int delayOnCity(int city); // for task 1
int delayOnYear(int year); // for task 1
int timeOnRoute(int pureTime, float hour, int city, int year); // for task 2

int main()
{
	int pureTime, city, year;
	float hour;

	//===
	printf("Enter pure time: ");
	fflush(stdout);
	scanf("%d", &pureTime);

	//===
	printf("Enter exit time: ");
	fflush(stdout);
	scanf("%f", &hour);

	//===
	printf("1 - Jerusalem \n2 - Tel-Aviv \n3 - Beer-Sheva \n4 - Haifa\n");
	printf("Enter your city: ");
	fflush(stdout);
	scanf("%d", &city);

	//===
	printf("Enter the year of manufacture of the car: ");
	fflush(stdout);
	scanf("%d", &year);

	//===
	timeOnRoute(pureTime, hour, city, year);

	return 0;
}

// Function for task 1
// Point 'a'
int delayTime(float hour)
{
	float hourTimeDelay;

	if (hour < 0.00 || hour > 23.59)
	{
		printf("Wrong time\n");
		return -1;
	}
	else if (hour >= 7.00 && hour <= 9.00) hourTimeDelay = 20;
	else if (hour > 9.00 && hour < 11.00) hourTimeDelay = 10;
	else if (hour >= 11.00 && hour < 13.00) hourTimeDelay = 5;
	else hourTimeDelay = 0;

	return hourTimeDelay;
}

// Function for task 1
// Point 'b'
int delayOnCity(int city)
{
	int cityTimeDelay;

	switch (city)
	{
		case 1:
			cityTimeDelay = 20;
			break;
		case 2:
			cityTimeDelay = 35;
			break;
		case 3:
			cityTimeDelay = 15;
			break;
		case 4:
			cityTimeDelay = 25;
			break;
		default:
			printf("Wrong city\n");
			return -1;
	}
	return cityTimeDelay;
}

// Function for task 1
// Point 'c'
int delayOnYear(int year)
{
	int yearTimeDelay;

	if (year <= 1995 && year >= 1950) yearTimeDelay = 15;
	else if (year > 1995 && year <= 2005) yearTimeDelay = 10;
	else if (year > 2005 && year <= 2017) yearTimeDelay = 5;
	else if (year > 2017 && year <= 2022) yearTimeDelay = 0;
	else if (year < 1950 || year > 2022)
	{
		printf("Wrong year\n");
		return -1;
	}
	return yearTimeDelay;
}

// Function for task 2
int timeOnRoute(int pureTime, float hour, int city, int year)
{
	if (delayTime(hour) != -1 && delayOnCity(city) != -1 && delayOnYear(year) != -1)
	{
	int timeResult = delayTime(hour);
	int cityResult = delayOnCity(city);
	int yearResult = delayOnYear(year);

	printf("\n");
	printf("Delay time = %d\n", timeResult + cityResult + yearResult);
	printf("Total time = %d", pureTime + timeResult + cityResult + yearResult);

	return pureTime + timeResult + cityResult + yearResult;
	}
	else
	{
		printf("Incorrect input\n");
		return -1;
	}
}

