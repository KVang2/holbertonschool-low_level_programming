#include "main.h"
/**
 * is_prime_number - if an integer is a prime number
 * @n: number
 * Return: 1 if prime number, if not then 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates number
 * @n: number to evaluate
 * @x: iterator
 * Return: 1 if n is prime, if not 0
*/
int actual_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (actual_prime(n, x - 1));
}
