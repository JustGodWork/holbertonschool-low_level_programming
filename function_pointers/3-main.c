#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 * 98 if number of args is wrong
 * 99 if operator is not +, -, *, /, or %
 * 100 if user tries to divide (/ or %) by 0
 */
int main(int argc, char *argv[])
{
	int (*cbResult)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	cbResult = get_op_func(argv[2]);
	if (cbResult == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (!check_arg(2) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", cbResult(num1, num2));
	return (0);
}
