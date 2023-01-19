/**
 * print_name - print name using pointer
 * @name: string to add
 * @f: pointer to function
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
