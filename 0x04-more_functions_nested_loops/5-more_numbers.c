#include "main.h"
/**
* more_numbers - prints numbers from 0 to 14, ten times
*/
void more_numbers(void)
{
int n;
int m;
for (n = 0; n < 10; n++)
{
for (m = 0; m <= 14; m++)
{
_putchar(m + '0');
}
_putchar('\n');
}
}
