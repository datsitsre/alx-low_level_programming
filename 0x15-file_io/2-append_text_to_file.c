#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *append_text_to_file - append to end of a file
  *@filename: file name
  *@text_content: file content
  *Return: 0 or return file end
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedata = 0, writedata = 0;
	int num = strlen(text_content);

	if (!filename)
		return (-1);

	filedata = open(filename, O_WRONLY | O_APPEND);
	if (filedata < 0)
		return (-1);

	if (text_content)
	{
		writedata = write(filedata, text_content, num);
		if (writedata != num)
			return (-1);
	}

	close(filedata);

	return (1);
}
