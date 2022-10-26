#include <stdio.h>

// declarations
void whoIsMore(int a, int b); 	// for first task
void isPozitiv(int a); 			// for second task
int sumOrSubst(int a, int b, int c);// for third task
void alcohol(int age, int hour); 	// for fourth task
void isPozitivAdv(int a); 		// for fifth task

int main() {
	int a, b, c, age, hour; // declare variables

	// Task 1
	printf("Task 1\n");
	printf("Enter a first number: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Enter a second number: ");
	fflush(stdout);
	scanf("%d", &b);

	whoIsMore(a, b);

	// Task 2
	printf("Task 2\n");
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &a);

	isPozitiv(a);

	// Task 3
	printf("Task 3\n");
	printf(
			"If number > or == 0 - the program will perform addition, otherwise subtraction.\n");
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &c);

	printf("Enter a first number: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Enter a second number: ");
	fflush(stdout);
	scanf("%d", &b);

	c >= 0 ? printf("Your choice: Addition \nResult: %d\n\n", sumOrSubst(a, b,
			c)) : printf("Your choice: Subtraction \nResult: %d\n\n",
			sumOrSubst(a, b, c));

	// Task 4
	printf("Task 4\n");
	printf("Enter your age: ");
	fflush(stdout);
	scanf("%d", &age);

	printf("Enter time from 0 to 24: ");
	fflush(stdout);
	scanf("%d", &hour);

	alcohol(age, hour);

	// Task 5
	printf("Task 5\n");
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &a);

	isPozitivAdv(a);

	return 0;
}

// Function for first task
void whoIsMore(int a, int b) {
	a >= b ? printf("Number %d is greater\n\n", a) : printf(
			"Number %d is greater\n\n", b);
}

// Function for second task
void isPozitiv(int a) {
	a >= 0 ? printf("Positive\n\n") : printf("Negative\n\n");
}

// Function for third task
int sumOrSubst(int a, int b, int c) {
	return c >= 0 ? a + b : a - b;
}

// Function for fourth task
void alcohol(int age, int hour) {
	age >= 21 && hour >= 10 && hour < 23 ? printf("Enjoy\n\n") : printf(
			"Sorry...\n\n");
}

// Function for fifth task
void isPozitivAdv(int a) {
	a != 0 ? (a > 0 ? printf("Positive") : printf("Negative")) : printf("Zero");
}
