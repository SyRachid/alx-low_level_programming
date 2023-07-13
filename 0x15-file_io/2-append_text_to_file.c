#include <unistd.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * append_text_to_file -function that appends text at the end of a file
 *
 * @filename:the name of file
 *
 * @text_content: the text to add
 *
 * Return: 1 or -1;
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int written;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fclose(file);
		return (-1);
	}
	text_content[strlen(text_content)+1] = '\0';
	written = fprintf(file, "%s", text_content);
	if (written < 0)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
