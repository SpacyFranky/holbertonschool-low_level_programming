#include <stdio.h>
/**
* main - Entry point.
* the first 50 fibonacci numbers.
* Return: Always 0.
*/
int main(void)
{
long int i, j, s;
i = 1;
j = 2;
printf("%li, ", i);
print("%li, ", j);
for (int k = 0 ; k < 50 ; k++)
{
s = i + j;
i = j;
j = s;
printf("%li, ", s);
}
printf("\n");
return (0);
}
