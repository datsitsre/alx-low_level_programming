#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
  *create_file - a create file
  *@filename: file name
  *@text_content: file contents
  *Return: 0 or file created
  */
int create_file(const char *filename, char *text_content)
{

	int filedata = 0;
	int writedat = 0;
	int num = strlen(text_content);

	if (!filename)
		return (-1);

	filedata = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filedata < 0)
		return (-1);

	if (text_content)
	{
		writedat = write(filedata, text_content, num);
		if (writedat != num)
			return (-1);
	}
	close(filedata);
	return (1);
}
