#include <stdio.h>
#include <ctype.h>
/**
*main : A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
*
*Return: return 0
*/
int main(void)
{
        char alphabet;

        for (alphabet = 'a';alphabet <= 'z'; alphabet++)
        {
                alphabet = tolower(alphabet);
                putchar(alphabet);
                if (alphabet == 'z')
                {
                        alphabet = 'A';
                        for (; alphabet <= 'Z'; alphabet++)
                        {
                                putchar(alphabet);
                        }
                        break;
                }
        }
        putchar('\n');
        return (0);
}
