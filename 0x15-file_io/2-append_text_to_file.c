#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to add to the end of the file.
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc, w_result;

	if (filename == NULL)
		return (-1);

	f_desc = open(filename, O_WRONLY | O_APPEND);
	if (f_desc == -1)
		return (-1);

	if (text_content)
	{
		size_t c_len = 0;

		while (text_content[c_len])
			c_len++;

		w_result = write(f_desc, text_content, c_len);
		if (w_result == -1)
		{
			close(f_desc);
			return (-1);
		}
	}

	close(f_desc);

	return (1);
}
