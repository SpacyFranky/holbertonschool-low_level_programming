#include "holberton.h"
/**
* _isupper - check the code for uppercase character.
* @c : variable
* Return: 1 if true of 0 if false .
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
