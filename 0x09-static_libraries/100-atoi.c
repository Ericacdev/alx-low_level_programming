#include "main.h"
/**
 * _atoi - convert a string into an integer.
 * @s: string to convert.
 *
 * Return: int.
 */
int _atoi(char *s)
{
         int si = 1, i = 0;
         unsigned int  len = 0;

         while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
         {
                 if (s[i] == '-')
                         si *= -1;
                 i++;
         }
         while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
         {
                 len = (len * 10) + (s[i] - '0');
                 i++;
         }
         len *= si;
         return (len);
 }
