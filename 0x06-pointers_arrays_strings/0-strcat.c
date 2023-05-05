i#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destination input
 * @src: poin ter to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/* iterate through  each src value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/* apend src[c2] to dest [c] while overwrithing the null bytre in dest*/
		dest[c++] = src[c2];

	return (dest);
}
