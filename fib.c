#include <stdio.h>

int main()
{
	int integer1 = 0;
	int integer2 = 1;
	int integer4 = 1;
	int integer3;
	int counter;

	printf("How many numbers do you want to print the Fibonacci Sequence with? ");
	scanf("%d" ,&counter);
	printf("\n");
	printf(" %d %d " ,integer1 ,integer2);
	while (integer4 < counter)
	{
		integer3 = integer1 + integer2;
		printf(" %d " ,integer3);
		integer1 = integer2;
		integer2 = integer3;
		integer4++;
	} 
	printf("\n");
	return 0;
}
