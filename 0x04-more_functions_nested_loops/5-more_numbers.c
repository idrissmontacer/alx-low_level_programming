#include "main.h"
/**
* more_numbers - prints numbers from 0 to 14, ten times
*/
void more_numbers(void)
{
int n;
int m;
int num;
for (n = 0; n < 10; n++)
{
for (m = 0; m <= 14; m++)
{
num = m;
if (m > 9)
{
_putchar(1 + 48);
num = m % 10;
}
_putchar(num + '0');
}
_putchar('\n');
}
}
