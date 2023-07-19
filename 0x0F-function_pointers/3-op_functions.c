#include "3-calc.h"

/**
 * op_add - function that returns sum of two numbers
 * @a: first argument
 * @b: second argument
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first argument
 * @b: The second argument
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function returns the product of two numbers.
 * @a: The first argument
 * @b: The second argument
 *
 * Return: a*b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of two numbers.
 * @a: first argument
 * @b: second argument
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of the division of two numbers.
 * @a: first argument
 * @b: second argument
 *
 * Return: The remainder of of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
