#include "holberton.h"
#include <stdio.h>

/**
 *  _strlen_recursion- check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 *@s: string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
			}
