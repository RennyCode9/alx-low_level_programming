#include <stdio.h>
/**
*main- Entry Point
*Return: Always 0
*/
int main(void)
{
int a;
char b;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (b = 'a'; b <= 'z'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
