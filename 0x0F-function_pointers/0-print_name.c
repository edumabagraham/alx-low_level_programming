/**
 * print_name - Prints a name
 *
 * @name: name to print
 * @f: function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
