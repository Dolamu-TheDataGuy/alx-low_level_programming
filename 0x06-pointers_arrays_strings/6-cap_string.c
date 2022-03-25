#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string
 * Return: 'str'
 */

char *cap_string(char *str)
{
	int i, c;
	int move;
	char alp[] = ",;.!?(){}\n\t\" ";

	for (i = 0, move = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
		{
			move = 1;
		}
		for (c = 0; alp[c] != '\0'; c++)
		{
			if (alp[c] == str[i])
			{
				move = 1;
			}
		}
		if (move)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				move = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
			{
				move = 0;
			}
			else if (str[i] > 47 && str[i] < 58)
			{
				move = 0;
			}
		}
	}
	return (str);
}
