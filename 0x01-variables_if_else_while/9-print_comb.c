#include <stdio.h>
/**
 * main -main function
 *
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		printf("%d", a);
		if (a != 9)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

