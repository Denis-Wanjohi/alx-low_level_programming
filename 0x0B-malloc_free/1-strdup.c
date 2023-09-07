#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str)
{
unsigned int i;	
 if (str == NULL){
 return NULL;
 }
char *duplicate=(char *)malloc(sizeof(str)+1);
for(i=0;i<sizeof(str);i++){
    duplicate[i]=str[i];
}
return duplicate;     
}
