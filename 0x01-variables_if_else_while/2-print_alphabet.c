#include <stdio.h>
#include <ctype.h>
/**
*main - Beginning point of a Program to print alphabet letter followed by new line
*
*Return: return 0 (exit after success)
*/
int main(void)

{
	int alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		letter = tolower(alphabet);
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
