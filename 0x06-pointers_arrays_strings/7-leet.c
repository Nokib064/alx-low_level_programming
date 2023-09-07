#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * leet - encodes a string to 1337
 * @str: string
 * Return: 0
 */

char *leet(char *str)
{
	int i;
	char leet_arr[256] = {0};

	leet_arr['a'] = '4';
	leet_arr['A'] = '4';
	leet_arr['e'] = '3';
	leet_arr['E'] = '3';
	leet_arr['o'] = '0';
	leet_arr['O'] = '0';
	leet_arr['t'] = '7';
	leet_arr['T'] = '7';
	leet_arr['l'] = '1';
	leet_arr['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_arr[str[i]])
			str[i] = leet_arr[str[i]];
	}
	return (str);
}
