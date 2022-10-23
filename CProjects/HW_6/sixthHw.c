#include <stdio.h>

// declarations
float percent(float a, float per);			// for first task
float circleLength(float radius);			// for second task
float housePrice(int area, float price);		// for third task
float salary(float hours, float wage, float bonus);	// for fourth task
float cash(float kg, float price, float discount);	// for fifth task


int main()
{
	// Variables
	float justNumber = 200;		// for first task
	float justPercent = 0.1;	// for first task

	float radius = 20;		// for second task

	int area = 65;			// for third task
	float pricePerArea = 14000.57;	// for third task

	float hours = 178.6;		// for fourth task
	float wage = 30;		// for fourth task
	float bonus = 0.3;		// for fourth task

	float kg = 2.;			// for fifth task
	float pricePerKg = 29.;		// for fifth task
	float discount = 0.3;		// for fifth task
	
	float res01 = percent(justNumber, justPercent);
	printf("Task 1.\nResult: %.0f%%\n\n", res01);

	float res02 = circleLength(radius);
	printf("Task 2.\nResult: %.2f\n\n", res02);

	float res03 = housePrice(area, pricePerArea);
	printf("Task 3.\nResult: %.2f\n\n", res03);

	float res04 = salary(hours, wage, bonus);
	printf("Task 4.\nResult: %.2f\n\n", res04);

	float res05 = cash(kg, pricePerKg, discount);
	printf("Task 5.\nResult: %.2f\n\n", res05);

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
