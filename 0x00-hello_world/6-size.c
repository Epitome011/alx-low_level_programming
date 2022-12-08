#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by Epitome
 * Return: 0
 */
int main(0)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}

