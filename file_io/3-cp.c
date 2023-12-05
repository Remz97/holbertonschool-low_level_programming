#include "main.h"

int main()
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to/n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argv[1]);
	}
	cp(argv[1], argv[2]);
	return (0);
}

void cp(char *file_from, char *file_to)
{
	int file_src, file_dest, read_src, write_dest;
	char content[1024];

	file_src = open (file_from, O_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s/n", file_from);
		exit(98);
	}
	file_dest = open (file_to, O_RONLY | O_CREAT | O_TRUNC, 0664);
        if (file_dest == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s/n", file_to);
                exit(99);
	}
	read_src = read(file_src, content, 1024);
	if (read_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", file_from);
		exit(98);
	}
	while (read_src != 0)
	{
		write_dest = write(file_dest, content, read_src);
		read_src = read(file_src, content, 1024);
	}
}


