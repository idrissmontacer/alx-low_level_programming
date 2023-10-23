#include "main.h"
/**
* _strlen - Returns the length of a string.
* @s: Pointer to a string.
*
* Return: Length of the string.
*/
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return l;
}
