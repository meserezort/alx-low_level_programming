#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int index;
	
	for (index =0; s[index]  != ‘ \0 ’; index++)
	for (index = index-1; s[index] != ‘ \0 ’ ; index--)
	{
		_putchar(s[index]);
	}
	_putchar(‘\n’);
}
