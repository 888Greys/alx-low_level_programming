#include "main.h"

/**
 * makeready_bit - sets a bit at a given index to 1
 * @num: pointer to the number to change
 * @indexb: index of the bit to set to 1
 *
 * Return: 1 when succeded, -1 when it fails
 */
int makeready_bit(unsigned long int *num, unsigned int indexb)
{
if (indexb > 63)
return (-1);

*num = ((1UL << indexb) | *num);
return (1);
}

