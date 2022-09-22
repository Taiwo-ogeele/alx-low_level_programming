#include "main.h"
/**
 * strcat concatenate two strings
 * @dest: destination
 * @source: source
 * return: dest
 */
char *_strcat(char *dest, char *src)
{
	int p, q;

	p = 0;
	q = 0;

	while (dest[p] != '\0')
	{
		p++;
	}

	while (src[q] != '\0')
	{
		dest[p] = src[q];
		q++;
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
