#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *struct token - struct token
 *@token: format token
 *@f: the f associated 
*/

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void format_char(char *separator, va_list ap);
void format_int(char *separator, va_list ap);
void format_float(char *separator, va_list ap);
void format_float(char *separator, va_list ap);
void format_float(char *separator, va_list ap);
void format_string(char *separator, va_list ap);

#endif
