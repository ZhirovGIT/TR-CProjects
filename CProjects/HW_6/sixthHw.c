#include <stdio.h>

// declarations
float percent(float a, float per);	// for first task
float circleLength(float radius);	// for second task
float housePrice(int area, float price);			// for third task
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

/*
 * 	Task 1
 * Написать функцию float percent(float a, float per), где а-число, per-процент.
 * В нее передать из main два аргумента, высчитать процент(per) числа (a), вернуть результат в main и распечатать.
 */

float percent(float a, float per)
{
	return per * a;
}

/*
 * 	Task 2
 * Написать функцию float circleLength(float radius).
 * Высчитать длину окружности по известному радиусу(radius)передаваемому из main и распечатать вернувшееся из функции значение в main
 */

float circleLength(float radius)
{
	double pi = 3.1415926535;
	return 2 * pi * radius;
}

/*
 * 	Task 3
 * Написать функцию float housePrice(int area, float price).
 * Высчитать цену на квартиру по известным площади(area) и цене за квадратный метр(price) передаваемыми из main.
 * Распечатать вернувшееся значение в main.
 */

float housePrice(int area, float price)
{
	return area * price;
}

/*
 * 	Task 4.
 * Написать функцию float salary(float hours, float wage, float bonus).
 * В нее передать из main три аргумента:
 * float hours – отработанные часы,
 * float wage - ставка в час,
 * float bonus - бонус в процентах!
 * И чтобы эта функция вернула нам зарплату, результат распечатать в main.
 */

float salary(float hours, float wage, float bonus)
{
	float salaryReceived = hours * wage;
	float salaryBonus = salaryReceived * bonus;
	return salaryReceived + salaryBonus;
}

/*
 * 	Task 5.
 * Написать функцию float cash(float kg, float price, float discount).
 * Передать из main 3 аргумента сколько заплатить за продукт с учетом скидки и распечатать вернувшееся значение в main.
 * Например:
 * float kg(сколько кг берем)
 * float price(цена за килограмм)
 * float discount(скидка в процентах)
 */

float cash(float kg, float price, float discount)
{
	float pricePerKg = kg * price;
	float priceDiscount = pricePerKg * discount;
	return pricePerKg - priceDiscount;
}
