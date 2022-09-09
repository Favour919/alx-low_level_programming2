#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int z;
for (z = 48; z <= 57; z++)
{
putchar(z);
}
for (z = 97; z <= 102; z++)
{
putchar(z);
}
putchar('\n');
return (0);
}
