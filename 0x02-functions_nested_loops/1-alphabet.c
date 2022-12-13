#include <stdio.h>
#include "main.h"
/**
 *main - Check Code
 *Return: Always 0.
*/

int main(void)
{
print_alphabet();
return (0);
}

/**
 *print_alphabet - Prints alphabets
*/

void print_alphabet(void)
{
for (int i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}

#include <unistd.h>



/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
