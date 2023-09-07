#include <stdio.h>
char *_strdupli(char *str)
{
 int i;	
 if (str == NULL){
 return NULL;
 }
char *duplicate=(char *)malloc(sizeof(str)+1);
for(i=0;i<sizeof(str);i++){
    duplicate[i]=str[i];
}
return duplicate;     
}
