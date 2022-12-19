#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * checksum - executes checksum
 * @s: input char
 * Return: checksum
 */
unsigned long checksum(char *s)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}
