 #include "main.h"

/**
 * *_strcpy - copy from pointer
 * @dest: array
 * @src: another array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}
