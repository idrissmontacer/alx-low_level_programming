#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string
* @accept: pointer to the string containing acceptable characters
*
* Return: number of bytes in the initial segment of s which consist only of
* bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
return (count);
}
return (count);
}
return (count);
}
