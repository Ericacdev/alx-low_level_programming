#include "main.h"
/*
*_atoi -converts a string into an integer.
*@s:string to convert.
*Return:int
*/
int _atoi(char *s)
{
	int i, k, b, len, m, cn;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++k;

		if (s[i] >= '0' && s[i] <= '9')
		{
			cn = s[i] - '0';
			if (k % 2)
				cn = -cn;
			b = b * 10 + cn;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (b);
}
