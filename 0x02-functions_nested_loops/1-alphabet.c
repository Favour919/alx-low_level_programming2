#include "main.h"
/**
 * main - print_alphabet
 * Return: void, and prints the alphabet on the standard output
 */
void print_alphabet(void)
{
int letterz = 'a';
for (; letterz <= 'z'; letterz++)
{
_putchar(letterz);
}
_putchar('\n');
}
