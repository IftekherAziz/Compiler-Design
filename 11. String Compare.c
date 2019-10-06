// C program to take input and print output fro a string and find length of the string and reverse string and compare two string
#include <stdio.h>
#include <string.h>

int main(){

   char str[100];
   char str2[100];
   int i;
   printf("Enter Your input string: ");
   scanf("%s",str);
   printf("Output string is: %s",str);

   int len = strlen(str);
   for(i=0; i<len; i++){
   }
   printf("\nString Length is: %d",len);
   printf("\nReverse string is: ");
   for(i=len;i>=0;i--){
    printf("%c",str[i]);
   }
   printf("\nSecond String input: ");
   scanf("%s",str2);
   if (strcmp(str,str2) == 0)
      printf("The strings are equal.");
   else
      printf("The strings are not equal.");
   return 0;
}
