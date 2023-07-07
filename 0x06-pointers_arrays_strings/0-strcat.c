#include <stdio.h>
/**
* main -Entry point of the program
*Return: Always 0
*/ 
int main(void)
{
char dest[50] = "Hello,";
char src[] = "world!";
printf("Before concatenation: %s\n", dest);
_strcat(dest, src);
printf("After concatenation: %s\n", dest);
return (0);

#include "main.h"
#include <stdio.h>

/**
 *  _strcat - Concatenates two strings
 *  @dest: The destination string
 *  @src: The source string
 *  Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}


	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
