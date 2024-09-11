#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc == 'q' || abc == 'e')
{
continue;
}
putchar(abc);
}
putchar('\n');
return (0);
}

/**
 * another way to solve this problem is:
 * 
 * for (abc = 'a'; abc <= 'z'; abc++)
 * {
 * if (abc == 'q' && abc == 'e')
 * putchar(abc);
 * }
 */
