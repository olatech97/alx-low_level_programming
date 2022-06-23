#include "main.h"

/*
 * factorial - main - check the code
 * @n: number of factorial
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else 
	{
		return (n * factorial(n - 1));
	}
	return 0;
}
