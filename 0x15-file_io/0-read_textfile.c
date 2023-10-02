#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"    
ssize_t read_textfile(const char *filename, size_t letters)
{if (filename == NULL )
	{

		return (0);
	}
FILE *file = fopen(filename, "r");
if (file == NULL )
{
return (0);

}
char *buffer = (char  *)malloc(letters);

if (buffer == NULL )
{
	fclose(file);
	return (0);
}
size_t bytesRead = fread(buffer,1,lettres, file);
if (bytesRead== 0)
{
	free(buffer);
	fclose(file);
	return (0);
}
size_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesWritten != bytesRead)
{
	free(buffer);
	fclose(file);
	return (0);
}
free(buffer);
fclose(file);
return bytesRead;


}
