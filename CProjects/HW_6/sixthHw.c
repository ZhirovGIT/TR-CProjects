#include <stdio.h>

// declarations
float percent(float a, float per);	// for first task
float circleLength(float radius);	// for second task
float housePrice(int area, float price);		// for third task
float salary(float hours, float wage, float bonus);	// for fourth task
float cash(float kg, float price, float discount);	// for fifth task


int main()
{
	printf("Task 1.\nResult: %.0f%%\n\n", percent(200, 0.1));
	printf("Task 2.\nResult: %.2f\n\n", circleLength(20));
	printf("Task 3.\nResult: %.2f\n\n", housePrice(65, 14000.57));
	printf("Task 4.\nResult: %.2f\n\n", salary(178.6, 30, 0.3));
	printf("Task 5.\nResult: %.2f\n\n", cash(2., 29., 0.3));

	return 0;
}

// Task 1
float percent(float a, float per)
{
	return per * a;
}

// Task 2
float circleLength(float radius)
{
	double pi = 3.1415926535;
	return 2 * pi * radius;
}

// Task 3
float housePrice(int area, float price)
{
	return area * price;
}

// Task 4
float salary(float hours, float wage, float bonus)
{
	float salaryReceived = hours * wage;
	float salaryBonus = salaryReceived * bonus;
	return salaryReceived + salaryBonus;
}

// Task 5
float cash(float kg, float price, float discount)
{
	float pricePerKg = kg * price;
	float priceDiscount = pricePerKg * discount;
	return pricePerKg - priceDiscount;
}
