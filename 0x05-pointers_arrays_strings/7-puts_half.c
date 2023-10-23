#include "main.h"
/**
* puts_half -  followed by a new line.
* @str: Pointer to a string.
*/
void puts_half(char *str)
{
int length = 0;
int i;
int start;
while (str[length] != '\0')
{
length++;
}
start = (length - 1) / 2;
for (i = start + 1; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
