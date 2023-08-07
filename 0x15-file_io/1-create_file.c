#include "main.h"

/**
* create_file - Creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
* Return: -1 if the function fails, 1 otherwise.
*/
int create_file(const char *filename, char *text_content)
{
	int file_desc, write_result;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		size_t content_length = 0;

		while (text_content[content_length])
			content_length++;

		write_result = write(file_desc, text_content, content_length);
		if (write_result == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);

	return (1);
}
