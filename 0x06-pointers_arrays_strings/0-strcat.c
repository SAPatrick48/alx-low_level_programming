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
}
