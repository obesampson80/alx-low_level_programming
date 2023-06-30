#include "main.h"

/**
* print_buffer - prints a buffer
 * @b: the address of the memory to print
 * @size: the size of the memory to print
 */
void print_buffer(char *b, int size)
{
	int offset, b_index, c_index;

	for (offset = 0; offset < size; offset += 10)
	{
		/* print offset */
		printf("%08x: ", offset);

		/* print bytes in hex */
		for (b_index = 0; b_index < 10; b_index++)
		{
			(offset + b_index < size) ? printf("%02x", b[offset + b_index])
				: printf("  ");
			(b_index % 2) ? printf(" ") : 0;
		}

		/* print bytes in ascii */
		for (c_index = 0; c_index < 10; c_index++)
			(offset + c_index < size) ? printf("%c", (b[offset + c_index] >= 32 &&
				b[offset + c_index] <= 126) ? b[offset + c_index] : '.') : 0;

		printf("\n");
	}

	(size <= 0) ? printf("\n") : 0;
}
