#include "main.h"
/**
* print_to_98 - Prints all natural numbers from n to 98.
* @n: The starting number.
*
* Return: void (no return value)
*/
void print_to_98(int n)
{
int count;
if (n > 98)
{
for (count = n; count > 98; count--)
{
printf("%d, ", count);
}
}
else
{
for (count = n; count < 98; count++)
{
printf("%d, ", count);
}
}
printf("98\n");
}
