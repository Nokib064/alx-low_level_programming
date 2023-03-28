#include "main.h"

/**
 * _atoi - converts string to int
 * @s: pointer to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int xy = 0;
	int sh = 1;
	int cd = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			sh *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			cd = 1;
			xy = (xy * 10) + (s[a] - '0');
			a++;
		}
		if (cd == 1)
		{
			break;
		}
		a++;
	}
	xy *= sh;
	return (xy);
}
