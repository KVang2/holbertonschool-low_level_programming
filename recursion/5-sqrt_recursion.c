#include "main.h"

int actual_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to calculate
 * Return: square root of a number
*/
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
	return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses
 * @n: number to calculate
 * @x: iterator
 * Return: result
*/
int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (actual_sqrt_recursion(n, x + 1));
}
