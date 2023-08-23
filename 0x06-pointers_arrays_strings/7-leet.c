#include "main.h"
#include <string.h>
/**
 * leet(char *n)-leet magics
 * @n:string to be used
 * Return:  n new string
 */

char *leet(char *n){
 for(int x=0;x<(strlen(n));x++){
        if(n[x]=='A' || n[x]=='a' ){
                n[x]='4';         
        }else if( n[x]=='E' || n[x]=='e'){
                 n[x]='3';
        }else if(n[x]=='O' || n[x]=='o'){
                 n[x]='0';
        }else if(n[x]=='T' || n[x]=='t'){
                 n[x]='7';
        }else if(n[x]=='L' || n[x]=='l'){
                 n[x]='1';
        }
        
 }
 return n;
}
