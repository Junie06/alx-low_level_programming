#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: parameter
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_recursion_calc(n, 1));
}

/**
 * _recursion_calc - function to help calculate sqrt
 * @n: number to calculate sqrt
 * @num: iterator
 * Return: resulting sqrt
 */
int _recursion_calc(int n, int num)
{
	if (num * num == n)
		return (num);
	if (num * num > n)
		return (-1);
	return (_recursion_calc(n, num + 1));
}
