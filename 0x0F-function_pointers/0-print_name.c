#include "function_pointers.h"

/**
 *print_name - function
 *@name: string
 *@f: function pointer
*/

void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
