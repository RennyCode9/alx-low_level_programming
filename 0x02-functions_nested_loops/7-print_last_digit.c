#include "main.h"
/**
 *print_last_digit - Check main.h
 *Description - Print the last digit of a number
 *Return: r
*/
int print_last_digit(int r)
{
  int value;
  value = (r % 10);
  _putchar(value + '0');
  return (value);
}
