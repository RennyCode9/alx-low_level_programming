#include "main.h"
/**
 *main - Check the Code
 *Return: Always 0
*/

void print_alphabet_x10(void)
{
char r,a;
for (r = '0'; r <= '9'; r++)
{
for (a = 'a'; a <= 'z'; a++)
{	  
_putchar(a);
}
_putchar('\n');
}   
}
