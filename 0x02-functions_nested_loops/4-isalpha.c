#include "main.h)

/**
 *_isalpha - Checks for aphabetic charecter
 * @c: The charecter to be checked
 * Return: 1 for alphabetic charecter or 0 for anything else
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{return (1);
}
return (0);
}
