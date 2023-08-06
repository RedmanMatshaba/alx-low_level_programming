#include "main.h"
/**
 * _strpbrk - program entry point
 * @s: input
 * @accept: onput
 * Return: Always 0 (success)
 */
char *_strbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			return (s);
		}
		s++;
	}
	return ('\0');
}
