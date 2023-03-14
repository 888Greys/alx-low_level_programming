#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if string contains only digits
 * @str: string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */

int check_num(char *str)
{
unsigned int count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
return (0);
count++;
}

return (1);
}

/**
 * main - print the sum of all arguments that are integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
int count, str_to_int, sum = 0;

count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum);

return (0);
}

