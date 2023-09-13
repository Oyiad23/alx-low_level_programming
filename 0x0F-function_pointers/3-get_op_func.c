#include "3-calc.h"

/**
*get_op_func - selects the correct function to perform
*the operation asked by the user. You’re not allowed
*to declare any other function.
*@s: char operator
*
*Return: A pointer to the function that corresponds to the operator
*/
int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int x = 0;

while (ops[x].op != NULL && *(ops[x].op) != *s)
x++;

return (ops[x].f);

}
