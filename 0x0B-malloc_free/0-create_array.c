#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of size size and assign char c.
 *
 * @size: Size of array.
 * @c: Char to assign.
 *
 * Description: Create array of size size and assign char c.
 *
 * Return: Pointer to array, NULL if fail.
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    str = malloc(sizeof(char) * size);

    if (size == 0 || str == NULL)
	return (NULL);

    for (i = 0; i < size; i++)
	str[i] = c;

    return (str);
}

