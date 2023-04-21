#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Hexadecimal
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i;
	char a;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (a = 'a'; i <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
