#include <stdio.h>

// Declarations
int isLuckyNumberPiter(int number); // for task 1
int hasSubNumber(int number, int subNumber); // for task 2

int sumOddDigits(int number);
int sumEvenDigits(int number);
int xPowY(int number, int power);
int countDigits(int subNumber);

int main()
{
	int number, subNumber;

	// Task 1
	printf("Task 1.\n");
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	int res01 = isLuckyNumberPiter(number);
	printf("%d\n\n", res01);

	// Task 2
	printf("Task 2.\n");
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &number);

	printf("Enter the sub number: ");
	fflush(stdout);
	scanf("%d", &subNumber);

	int res02 = hasSubNumber(number, subNumber);
	printf("%d", res02);

	return 0;
}

// Task 1
int isLuckyNumberPiter(int number) 
{
	if (number <= 10) 
{
		printf("Wrong number!!!\n");
		return -1;
	}

	int evenRes = sumEvenDigits(number);
	int oddRes = sumOddDigits(number);

	if (evenRes != oddRes) return 0;

	return 1;
}

// Function - calculation of the sum of odd digits
int sumOddDigits(int number)
{
	int oddSum;

	for (oddSum = 0; number != 0; number /= 10)
	{
		if (number % 2 == 1) oddSum += number % 10;
	}

	return oddSum;
}

// Function - calculation of the sum of even digits
int sumEvenDigits(int number)
{
	int evenSum;

	for (evenSum = 0; number != 0; number /= 10)
	{
		if (number % 2 == 0) evenSum += number % 10;
	}

	return evenSum;
}

// Task 2
int hasSubNumber(int number, int subNumber)
{
	if (number < 0 || subNumber < 0 || number < subNumber)
	{
		return 0;
	}
        else if (number == 0 && subNumber == 0) return 0;

        int count = countDogits(subNumber);
        int divider = xPowY(10, count);

        for(; number != 0; number /= 10)
        {
            if(number % divider == subNumber) return 1;
        }
	return 0;
}

// Function - find number search area
int countDigits(int subNumber)
{
        int count;

        if (subNumber == 0) return 1;
        for (count = 0; subNumber != 0; number /= 10)
        {
             count++;
        }
        return count;
}

int xPowY(int number, int power)
{
 if(power < 0) return 0;
 
 int res;
 for (res = 1; power > 0; power --)
 {
  res += number;
 }
 return res;
}
