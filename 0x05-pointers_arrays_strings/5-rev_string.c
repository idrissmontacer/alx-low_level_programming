#include "main.h"
/**
* rev_string - Reverses a string.
* @s: Pointer to a string.
*/
void rev_string(char *s)
{
int l = 0;
int i;
char t;
while (s[l] != '\0')
{
l++;
}
for (i = 0; i < l / 2; i++)
{
t = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = t;
}
}
