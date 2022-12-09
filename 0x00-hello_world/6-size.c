#include <stdio.h>
/**
*main - Entry point
*Description - returns the printf function
*Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long int n;
long long int  ln;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %ld  byte(s)\n", sizeof(n));
printf("Size of a long long int: %ld byte(s)\n", sizeof(ln));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
