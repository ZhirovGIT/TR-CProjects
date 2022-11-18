#include <stdio.h>

// Declarations
void print_abc_reverse (int from, int to);	// task 1
void chessBoard(int number, char letter);	// task 2
void sandglassUp();		// task 3
void sandglassDown();	// task 4

// Global var
int size = 20;

int main()
{
	// Add and initialization
	int from = 32, to = 127;	// for task 1
	int number = 1;		// for task 2
	char letter = 'A';	// for task 2

	// Task 1
	printf("Task 1.\n");
	print_abc_reverse(from, to);

	// Task 2
	printf("Task 2.\n");
	chessBoard(number, letter);

	// Task 3
	printf("Task 3.\n");
	sandglassUp();
	printf("\n");

	printf("Task 4.\n");
	sandglassDown();
	printf("\n");



	return 0;
}

// Function for TASK 1
void print_abc_reverse(int from, int to)
{
	if (from < 32 || to > 127 || to < from)
	{
		printf("WRONG!!!\n\n");
		return;
	}

	int count = 1;

	int i;
	for (i = to; i >= from; i--, count++)
	{
		printf("%d -> %c \t", i, i);		// print number -> symbol

		if (!(count % 3)) printf("\n");		// transition to a new line
	}
	printf("\n");
}

// Function for TASK 2
void chessBoard(int number, char letter)
{
	if ((number > 0 && number < 9) &&
			((letter >= 'a' && letter <= 'h') || (letter >= 'A' && letter <= 'H')))
	{
		if (!((letter + number) % 2)) printf("Black\n\n");
		else printf("White\n\n");
	}
	else printf("WRONG!!!\n\n");
}


// Function for TASK 3
void sandglassUp()
{
	int i, j;	// i - lines, j - column

		for (j = 0; j < size; j++) {
			for (i = 0; i < size; i++) {
				if (i == 0 ||
						i == size - 1 ||
						j == 0 ||
						j == size - 1 ||
						i == j ||
						i + j == size - 1 ||
						(i + j < size - 1 && i > j)) // <- ready!
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
}

// Function for TASK 4
void sandglassDown()
{
	int i, j;	// i - lines, j - column

			for (j = 0; j < size; j++) {
				for (i = 0; i < size; i++) {
					if (i == 0 ||
							i == size - 1 ||
							j == 0 ||
							j == size - 1 ||
							i == j ||
							i + j == size - 1 ||
							(i + j > size - 1 && i < j)) // <- ready!
						printf("* ");
					else
						printf("  ");
				}
				printf("\n");
			}
}
