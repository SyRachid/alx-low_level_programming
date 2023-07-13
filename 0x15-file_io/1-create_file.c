#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file -function that creates file
 *
 * @filename: the name of file to create
 *
 * @text_content: the text to fill
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int write;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);
	chmod(filename, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		write = fputs(text_content, file);
		if (write == EOF)
		{
		fclose(file);
		return (-1);
		}
	}
	fclose(file);
	return (1);
}
