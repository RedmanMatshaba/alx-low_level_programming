#include "main.h"
/**
 * _isalpha - program checks for alphabetic charecter
 * @c: the charecter to be checked
 * Return: 1 if c is a letter and return 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
