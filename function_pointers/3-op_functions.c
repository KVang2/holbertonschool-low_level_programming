#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adding
 * @a: int 1
 * @b: int 2
 * Return: ..
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting
 * @a: int 1
 * @b: int 2
 * Return: value
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: int 1
 * @b: int 2
 * Return: value
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: int 1
 * @b: int 2
 * Return: value
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/** op_mod - mod
 * @a: int 1
 * @b: int 2
 * Return: value
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
