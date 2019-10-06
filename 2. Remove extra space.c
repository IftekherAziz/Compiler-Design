#include <stdio.h>
#include <string.h>

int main()
{
   char str1[100], str2[100];
   int x =0 ,y = 0,temp;

   printf("\nEnter A String: ");
   gets(str1);

   while (str1[x] != '\0'){
      if (str1[x] == ' '){
         temp = x + 1;
         if (str1[temp] != '\0') {
            while (str1[temp] == ' ' && str1[temp] != '\0') {
               if (str1[temp] == ' ') {
                  x++;
               }
               temp++;
            }
         }
      }
      str2[y] = str1[x];
      x++;
      y++;
   }

   str2[y] = '\0';

   printf("\nString after removing blanks: %s\n", str2);

   return 0;
}
