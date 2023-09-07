#include <stdio.h>
char *_strdupli(char *str)
{
 int i;	
char *duplicate=(char *)malloc(sizeof(str)+1);
printf("%d\n",sizeof(str));
for(i=0;i<sizeof(str);i++){
    duplicate[i]=str[i];
}
return duplicate;     
}
