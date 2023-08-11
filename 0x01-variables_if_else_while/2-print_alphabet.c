#include <stdio.h>
#include <ctype.h>
/**
*main - Beginning point of a Program to print alphabet letter followed by new line
*
*Return: 0 (success)
*/
int main(void)
{
	int alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
