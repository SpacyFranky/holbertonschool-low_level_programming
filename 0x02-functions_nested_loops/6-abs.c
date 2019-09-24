#include "holberton.h"
/**
* abs - check the code for Holberton School students.
*
* Return: Always 0.
*/
int _abs(int n)
{
if ((n == 0) || (n == 1))
return n;
else if (n < 0)
return -n;
else 
return n*n;
}
