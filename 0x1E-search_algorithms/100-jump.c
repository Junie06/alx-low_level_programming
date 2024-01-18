#include "search_algos.h"

/**
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i;
	size_t prev = 0, current;

	if (!array || !size)
		return (-1);

	while (array[prev] < value)
	{
		current = (prev + jump < size) ? prev + jump : size - 1;
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		if (array[current] >= value) {
			for (i = prev; i <= current; ++i) {
				printf("Value found between indexes [%ld] and [%ld]\n",
						prev, jump);
				if (array[i] == value) {
					return i;
				}
			}
			return -1;
		}

		prev += jump;
		if (prev >= size) {
			return -1;
		}
	}

	return -1;
}
