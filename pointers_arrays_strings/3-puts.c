/**
 * _puts - Print a string
 * @s: String to print
 *
 * Return: Nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s += 1;
	}
}
