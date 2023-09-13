#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @x: first integer
 * @y: second integer
 * Return: sum of x and y
 */
int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - calculates the difference of two integers
 * @x: first integer
 * @y: second integer
 * Return: difference of x and y
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - calculates the product of two integers
 * @x: first integer
 * @y: second integer
 * Return: product of x and y
 */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - calculates the division of two integers
 * @x: first integer
 * @y: second integer
 * Return: division of x and y
 */
int op_div(int x, int y)
{
	return (x / y);
}

/**
 * op_mod - calculates the remainder of the division
 * @x: first integer
 * @y: second integer
 * Return: remainder of x divided y
 */
int op_mod(int x, int y)
{
	return (x % y);
}
