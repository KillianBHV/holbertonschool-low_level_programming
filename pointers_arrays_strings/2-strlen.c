/**
 * _strlen - Function that return the length of a string
 * @s: Pointer to a string
 *
 * Return: Length of selected string
 */
int _strlen(char *s)
{
	int length_string;

	length_string = 0;
	while(*s != '\0')
	{
		length_string += 1;
		s += 1;
	}
	return (length_string);
}
