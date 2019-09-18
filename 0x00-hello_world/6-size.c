#include <stdio.h>
/**
* main - Entry point
* sizeof
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of char: %lu\n", sizeof(char), "byte(s)");
printf("Size of an int: %lu\n", sizeof(int), "byte(s)");
printf("Size of a long int: %lu\n", sizeof(long int), "byte(s)");
printf("Size of a long long int: %lu", sizeof(long long int), "byte(s)");
printf("Size of a float: %lu", sizeof(float), "byte(s)");
return (0); }
