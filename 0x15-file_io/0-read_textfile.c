#include "main.h"
#include "stdio.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
char buffer[letters];
FILE *file = fopen(filename,"r");
if (file == NULL)
{
return (0);
}  
size_t bytesRead = fread(buffer, 1, 114, file);
buffer[bytesRead] = '\0';
printf("%s\n", buffer);    
fclose(file);
return (0);
}
