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

	ssize_t open_data, read_data, write_data;
	char *data_buffer;


	if (filename == NULL)
		return (0);


	data_buffer = malloc(sizeof(char) * letters);

	if (data_buffer == NULL)
		return (0);

	open_data = open(filename, O_RDONLY);
	if (open_data < 0)
	{
		return (0);
	}

	read_data = read(open_data, data_buffer, letters);
	if (read_data  < 0)
	{
		free(data_buffer);
		return (0);
	}

	write_data = write(STDOUT_FILENO, data_buffer, read_data);
	if (write_data < 0)
	{
		free(data_buffer);
		return (0);
	}
	free(data_buffer);

	return (write_data);


}
