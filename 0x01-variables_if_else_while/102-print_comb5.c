#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
putchar('0' + num1 / 10);
putchar('0' + num1 % 10);
putchar(' ');
putchar('0' + num2 / 10);
putchar('0' + num2 % 10);
if (!(num1 == 9 && num2 == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
