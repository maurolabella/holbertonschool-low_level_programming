

/**
 * binary_to_uint - converts binary to a number
 *
 * @b: pointer to a string
 * Return: unsigned int for the converted number or cero in case of error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i = 0;

	while (b[i])
	{
		if (!(b[i] == 49 || b[i] == 48))
			return (-1);
		n = n << 1;
		n = n + b[i] - 48;
		i++;
	}
	return (n);
}
