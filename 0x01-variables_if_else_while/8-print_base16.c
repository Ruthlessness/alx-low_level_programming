#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char no = '0';
	char alp = 'a';

	while (no <= '9')
	{
		putchar(no);
		no++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
