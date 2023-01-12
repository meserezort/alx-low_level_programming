#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Makes a new string containing `s1` and the first `n` bytes
 * of `s2`
 *  @s1: Pointer to the first character of the first string
 *  @s2: Pointer to the first character of the second string
 *  @n: Number of bytes to copy from `s2`
 *
 * Return: Pointer to the first character in the concatonated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i, count = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s2);
	if (_strlen(s2) > n)
		len = n;

	cat = malloc(sizeof(char) * (_strlen(s1) + len + 1));

	if (cat == NULL)
		return (NULL);
	for (; *s1; s1++, count++)
		cat[count] = *s1;

	for (i = 0; *s2 && i < n; i++, s2++, count++)
		cat[count] = *s2;

	cat[count] = '\0';

	return (cat);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to first character of string
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i++;

	return (i);
}
