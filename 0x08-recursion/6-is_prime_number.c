#include "main.h"

/**
 * is_prime_number - function that returns prime numbers
 * @n: number passed
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates prime recursively
 * @n: number to calculate
 * @i: iterator
 * Return: 1 if n is prime, else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
