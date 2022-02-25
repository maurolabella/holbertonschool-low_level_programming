
/**
 * _strstr - find location of first total match of a set substring
 * @haystack : the mayor string to look for in
 * @needle : string defines to string with which compare
 * Return: a pointer towards the beginning of the matched coincidence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			else
			{
				j++;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}




