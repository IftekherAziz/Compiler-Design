//C programm to remove special char from a string

#include <stdio.h>
#include <string.h>

int main(){
   char str[100];
   int i,len;
   printf("Input String: ");
   scanf("%s",str);
   len = strlen(str);
   printf("Output String: ");
   for (i=0;i<len;i++){
     if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
         printf("%c",str[i]);
   }
   return 0;
}
