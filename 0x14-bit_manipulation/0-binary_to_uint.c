#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned interger
 * @p: string containing the binary number
 *
 * Return: the number being converted
 */
unsigned int binary_to_uint(const char *p)
{
	int i;
	unsigned int declare_value = 0;

	if (!p)
		return (0);

	for (i = 0; p[i]; i++)
	{
		if (p[i] < '0' || p[i] > '1')
			return (0);
		declare_value = 2 * declare_value + (p[i] - '0');
	}

	return (declare_value);
}

