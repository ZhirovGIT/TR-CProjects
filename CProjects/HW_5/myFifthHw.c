#include <stdio.h>

// declarations
int f1();
int f2();
float f3();
float f4();
float f5();

int main()
{
	f1();
	printf("Function 1: %d\n", f1());

	f2();
	printf("Function 2: %d\n", f2());

	f3();
	printf("Function 3: %.2f\n", f3());

	f4();
	printf("Function 4: %.0f%%\n", f4());

	f5();
	printf("Function 5: %.0f%%\n", f5());

	return 0;
}

int f1()
{
	int a = 20;
	return a * 4;
}

int f2()
{
	int a = 50;
	return a - 10;
}

float f3()
{
	float a = 32.6;
	return a / 3;
}

float f4()
{
	float a = 100.00;
	return a * 0.74;
}

float f5()
{
	float a = 200.00;
	float percent = 0.28;
	return percent * a;
}
