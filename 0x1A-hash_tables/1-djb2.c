#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int z;

	hash = 5381;
	while ((z = *str++))
	{
		hash = ((hash << 5) + hash) + z; /* hash * 33 + z */
	}
	return (hash);
}
