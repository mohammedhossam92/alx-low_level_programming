#include "variadic_functions.h"

/**
 *format_char - formats charachter
 *@separator: the string separator
 *@ap: argument
*/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 *format_int - function
 *@separator: the string operator
 *@ap: argument pointer
*/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 *format_float - format float
 *@separator: the string separator
 *@ap: argument pointer
 *
*/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 *format_string - format strings
 *@separator: the string separator
 *@ap: argument pointer
*/

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 *print_all - prints all
 *@format: the format string
 *
*/

void print_all(const char * const format, ...)
{
	int i = 0, y;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		y = 0;
		while (tokens[y].token)
		{
			if (format[i] == tokens[y].token[0])
			{
				tokens[y].f(separator, ap);
				separator = ", ";
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
