#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int no = '0';

	while (no <= '9')
	{
		putchar(no);
		if (no != '9')
		{
			putchar(',');
			putchar(' ');
		}
		no++;
	}
	putchar('\n');
	return (0);
}
