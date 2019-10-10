#include "holberton.h"
/**
 * length - returns the length of a string.
 * @s : string
 * Return: length of the string.
 */
int length(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + length(s + 1));
}
/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s : string
 * @start : start of string
 * @end : end of string
 * Return: 1 or 0.
 */
int palindrome(char *s, int start, int end)
{
if (s[start] != s[end])
return (0);
else if (start > end)
return (1);
palindrome(s, start + 1, end - 1);
return (1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s : string
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
int l;
l = length(s);
return (palindrome(s, 0, l - 1));
}
