#include "main.h"

/**
* main - entry point
* description: copies the content of a file to another file
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 97-100 on failure
*/
int main(int argc, char *argv[])
{
int src_fd, dest_fd, read_bytes, write_bytes;
char buffer[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

/* open source file */
src_fd = open(argv[1], O_RDONLY);
if (src_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* open destination file */
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (dest_fd == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

/* read from source file and write to destination file */
while ((read_bytes = read(src_fd, buffer, 1024)) > 0)
{
write_bytes = write(dest_fd, buffer, read_bytes);
if (write_bytes == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (read_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (close(src_fd) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), exit(100);

if (close(dest_fd) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);

return (0);
}

