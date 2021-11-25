#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - Copies a string pointed to by @src, including the
*       	 terminating null byte, to a buffer pointed to by @dest.
* @dest: A buffer to copy the string to.
* @src: The source string to copy.
*@n: len
* Return: A pointer to the destination string @dest.
*/

char *_strncpy(char *dest, char *src, int n)
{

int i = 0;


while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
 
 
return (dest);
}
