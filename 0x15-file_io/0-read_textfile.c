#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * read_textfile- function that reads a textfile and prints it to the POSIX
 *
 * @filename: the pointer to the file
 *
 * @letters: the number of letters to print
 *
 * Return:nothing
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *ch = (char *)malloc((letters + 1) * sizeof(char));
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	if (ch == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(ch, sizeof(char), letters, file);
	if (bytesRead <= 0)
	{
			free(ch);
			fclose(file);
			return (0);
	}
	ch[bytesRead] = '\0';
	bytesWritten = printf("%s", ch);
	free(ch);
	fclose(file);
	if (bytesWritten != bytesRead)
		return (0);
	return (bytesWritten);

}
