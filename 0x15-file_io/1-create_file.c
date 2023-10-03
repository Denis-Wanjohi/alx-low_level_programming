#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
int create_file(const char *filename, char *text_content)
{
    int len = 0;
    int filed;
    ssize_t bytes_written;
    if (filename == NULL)
    {
        return (-1);
    }

    filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (filed == -1)
    {
        return (-1);
    }

    if (text_content != NULL)
    {
        for (len = 0; text_content[len];)
			len++;
	bytes_written = write(filed, text_content,len);
        close(filed);

        if (bytes_written == -1)
	{
            return (-1);
        }
    }
    else
    {
        close(fd);
    }

    return (1);
}

