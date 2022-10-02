#include <stdio.h>

// declarations
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();

int main()
{
	// First sequence
	printf("main ");
	f6();			// f6()
	printf("\n");

	// Second sequence
	printf("main ");
	f1();			// f1() -> f4() -> f5() -> f6()
	printf("\n");

	// Third sequence
	printf("main ");
	f2();			// f2() -> f6()

	return 0;
}

void f1()
{
	printf("f1() ");
	f4();			// f1() -> f4()
}

void f2()
{
	printf("f2() ");
	f6();			// f2() -> f6()
}

void f3()
{
	printf("f3() ");
}

void f4()
{
	printf("f4() ");
	f5();			// f1() -> f4() -> f5()
}

void f5()
{
	printf("f5() ");
	f6();			// f1() -> f4() -> f5() -> f6()
}

void f6()
{
	printf("f6() ");
}
