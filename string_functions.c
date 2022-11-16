#include "shell.h"

/**
* _strcmp - compares two strings
* @s1: the first string;
* @s2: the second string;
*
* Return: returns the comparison result
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, output;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;

	output = (*(s1 + i) - *(s2 + i));

	return (output);
}

/**
* _strlen - returns the string length
* @s: the string
*
* Return: returns the length of the string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
* _strncmp - compares two strings up to n bytes
* @s1: the first string
* @s2: the second string
* @n: number of bytes
*
* Return: the string comparison
*/
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
* _strdup - make string duplicate
* @s: the string to be duplicated
*
* Return: pointer to the duplicated string
*/
char *_strdup(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; *s != '\0'; s++, i++)
		ptr[i] = s[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
* _strchr - locates a character within a string
* @s: string of concern
* @c: character of concern
*
* Return: the pointer of the first occurence of the 
* character otherwise NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}

