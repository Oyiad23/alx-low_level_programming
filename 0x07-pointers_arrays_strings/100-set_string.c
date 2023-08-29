#include "main.h"

/**
* set_string - a function that sets the value of a pointer to a byte
*@s: pointer value
*@to: value pointed to
*
*/
void set_string(char **s, char *to)
{
	*s = to;
}
