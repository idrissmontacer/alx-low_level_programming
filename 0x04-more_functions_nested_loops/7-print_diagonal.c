#include "main.h"
/**
* print_diagonal - Print a diagonal of backslashes
* @n: The number of backslashes to print
*
* Description: If n is less than 0, print a newline character.
* Otherwise, print n lines witasing number of spaces before each backslash.
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
int space;
for (i = 1; i <= n; i++)
{
for (space = 1; space <= i; space++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
