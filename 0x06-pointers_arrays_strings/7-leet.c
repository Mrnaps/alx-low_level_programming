#include "main.h"
/**
 * leet - main code block
 *
 * @s: string to be encoded
 *
 * Return: string;
 */
char *leet(char *s)
{
	int x = 0, y, uc = 0;
	int lc[5] = {97, 101, 111, 116, 108};
	int code[5] = {4, 3, 0, 7, 1};

	while (*(s + x))
	{
		for (y = 0; y < 5; y++)
		{
			uc = lc[y] - 32;
			if (s[x] == lc[y] || s[x] == uc)
			{
				s[x] = code[y] + 48;
			}
		}
		x++;
	}
	return (s);
}
