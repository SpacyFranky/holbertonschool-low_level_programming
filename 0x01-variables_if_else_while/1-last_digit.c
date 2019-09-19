#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* if
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit > 5)
printf("Last digit of %d ", n, "is %d ", lastdigit, "and is greater than 5\n");
if (lastdigit == 0)
printf("Last digit of %d ", n, "is %d ", lastdigit, "and is 0\n");
if ((lastdigit < 6) || (lastdigit != 0))
printf("Last digit of %d ", n, "is %d ", lastdigit,
"and is less than 6 and not 0\n");
return (0);
}
