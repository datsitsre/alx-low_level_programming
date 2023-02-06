#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *read_textfile - read a text file
  *@filename: the filename
  *@letters: the letters
  *Return: 0 or letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	 int i, y;
	 int filedata;
	 char *data_buffer;

	if (!filename)
		return (0);
	filedata = open(filename, O_RDONLY);
	if (filedata < 0)
		return (0);


	data_buffer = malloc(sizeof(char) * letters);
	if (data_buffer == NULL)
		return (0);

	i = read(filedata, data_buffer, letters);
	if (i < 0)
	{
		free(data_buffer);
		return (0);
	}
	data_buffer[i] = '\0';
	close(filedata);

	y = write(STDOUT_FILENO, data_buffer, i);
	if (y < 0)
	{
		free(data_buffer);
		return (0);
	}
	free(data_buffer);
	return (y);
}
