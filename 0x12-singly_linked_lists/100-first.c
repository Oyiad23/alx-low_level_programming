#include <stdio.h>

void __attribute__((constructor)) tortoise_hare_race(void);

/**
 * tortoise_hare_race - Prints a string before the
 * main function is executed.
 */
void tortoise_hare_race(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
