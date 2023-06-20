#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @num: Argument passed
 * Return: Absolute value of a number or zero
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = -num;
	}
	return (num);
}
