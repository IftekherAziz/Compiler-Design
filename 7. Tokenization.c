#include <string.h>
#include <stdio.h>

int main () {
   char str[100] = "Eftekher -Aziz";
   const char s[2] ="-";
   char *token;
   token = strtok(str, s);
   while( token != NULL ) {
      printf( "After Tokenization: %s\n", token );

      token = strtok(NULL, s);
   }

   return(0);
}
