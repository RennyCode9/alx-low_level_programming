#include <stdio.h>
/**
 *main - Check the Code
 *Return: Always 0
*/

void print_alphabet_x10(void);

int main(void)
{
print_alphabet_x10();
return (0);
}

/**
 *print_alphabet_x10 - Prints Alphabets 10 times
*/
void print_alphabet_x10(void)
{
for (int r = '0'; r <= '9'; r++)
{
for (int a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
}
