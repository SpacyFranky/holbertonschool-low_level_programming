#include <unistd.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int len = 57;
write(1, msg, len);
return (1);
}

