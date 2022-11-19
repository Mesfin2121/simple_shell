#include "main.h"
/**
 * compareEnv - identifies if first char is a slash.
 * @s1: first string
 * @s2: exit string
 * Return: 1 if yes 0 if no.
 **/
int compareEnv(char *s1, char *s2)
{
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 2)
			break;
		i++;
		s2++;
	}
	return (*s1 - *s2);
}
