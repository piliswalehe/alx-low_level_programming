#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer to a string
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] == ' ') ||
			(str[i - 1] == '\t') ||
			(str[i - 1] == '\n') ||
			(str[i - 1] == ',') ||
			(str[i - 1] == ';') ||
			(str[i - 1] == '.') ||
			(str[i - 1] == '!') ||
			(str[i - 1] == '?') ||
			(str[i - 1] == '"') ||
			(str[i - 1] == '(') ||
			(str[i - 1] == ')') ||
			(str[i - 1] == '{') ||
			(str[i - 1] == '}') ||
			(str[i - 1] == '0'))
			{
				str[i] -= 32;
			}

			i++;
		}

	}
	return (str);
}

