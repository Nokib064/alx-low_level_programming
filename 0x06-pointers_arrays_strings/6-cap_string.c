#include "main.h"

/**
 * cap_string - function that capitalize all string letters
 * @str: string
 * Return:0
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ',' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == ' ' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
			str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}

		}
	}
	return (str);
}




