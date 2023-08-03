#ifndef MAIN_H
#define MAIN_H
int get_endianness(void);
#endif
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *)&x;
return (*c);
}


/**
 * main - main
 */

int main(void)
{
int n;
n = get_endianness();
if (n != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}

