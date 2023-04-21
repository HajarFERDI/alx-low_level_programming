#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != e && i != q)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
