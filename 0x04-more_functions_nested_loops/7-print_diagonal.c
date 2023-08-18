#include "main.h"
/**
*print_diagonal - prints a diagonal
*@dl:parameter
*Return:returns nothing
*/

void print_diagonal(int dl)
{
int len, space;

if (dl > 0)
{
for (len = 0; len < dl; len++)
{
for (space = 0; space < len; space++)
_putchar(' ');

_putchar('\\');

if (len == (dl - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
