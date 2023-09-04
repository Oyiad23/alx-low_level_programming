#include "main.h"

/**
 * _isalpha - determines if a character is alphabetical
 *
 *@c: the chsracter to be returned
 * Return: Always 0.
 */

int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}

}
