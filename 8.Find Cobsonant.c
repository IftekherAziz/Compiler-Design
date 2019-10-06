#include<stdio.h>
int main(){
   char str[1000];
   printf("Enter string : ");
   gets(str);
   int i,len;
   len=strlen(str);
   printf("Consonant are:\n");
   for(i=0;i<len;i++){
      if(str[i]!='a' && str[i]!='A'  && str[i]!='E'  && str[i]!='e'  && str[i]!='I'  && str[i]!='i'  && str[i]!='O'  && str[i]!='o'  && str[i]!='U'  && str[i]!='u'){
         printf("%c\n",str[i]);
      }
   }
   return 0;
}
