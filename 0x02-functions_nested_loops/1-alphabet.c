#include <stdio.h>
/**
 *main - Check Code
 *Return: Always 0.
*/

void print_alphabet(void);

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
putchar(i);
}
putchar('\n');
}
