#include "main.h"
/**
 * print_all-
 *
 * @format:
 *
 * Return:nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args,format);
	while (format)
	{
		switch
