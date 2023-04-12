#include "main.h"

/**
  * checkPalindrome - actually checks s if palindrome
  * @s: string to check
  * @f: 1st string char
  * @l: last string char
  * Return: 1 (is paindrome), 0 (not palindrome)
  */

int checkPalindrome(char *s, int f, int l)
{
	/* one char string is a palindrome */
	if (f == l)
		return (1);
	/* if 1st & last chars don't match, not a palindrome */
	if (s[f] != s[l])
		return (0);
	else if (f < (l + 1))
		return (checkPalindrome(s, (f + 1), (l - 1)));
	else
		return (1);
}

/**
  * is_palindrome - check if string reads same front & back
  * @s: string to check
  * Return: 1 (true), 0 (false)
  */

int is_palindrome(char *s)
{
	/* calculating the string length of s */
	int len = _strlen_recursion(s);

	/* empty string is a palindrome */
	if (len == 0)
		return (1);

	return (checkPalindrome(s, 0, (len - 1)));
}
