#include "main.h"

/**
 * erase_bit - engage the value of a given bit to 0
 * @num: pointer to the num to change
 * @indexb: index of the bit to clear
 *
 * Return: 1 when it succed, -1 when it fails
 */
int erase_bit(unsigned long int *num, unsigned int indexb)
{
if (indexb > 63)
return (-1);

*num = (~(1UL << indexb) & *num);
return (1);
}

