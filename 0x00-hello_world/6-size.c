#include <studio.h>
/**
 * main - a program that prints the size of variouscomputer types
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

Printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
Printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
Printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
Printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
Printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
