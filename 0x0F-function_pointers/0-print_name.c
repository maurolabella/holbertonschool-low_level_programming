/**
 * print_name - writes the character c to stdout
 * @name: The character to print
 *@f: function received as argument
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
