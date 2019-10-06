#include<stdio.h>
#include <string.h>

int main(){
  char str[100];
  int i,len;
  printf("Enter your string : ");
  gets(str);
  len=strlen(str);
  printf("Special charecter are:\n");
  for(i=0;i<len;i++){
    if(str[i]=='+' || str[i]=='.' || str[i]=='?' || str[i] =='`' || str[i]=='(' ||str[i]==')'|| str[i]=='!' || str[i]=='~' || str[i]==','|| str[i]==str[i]=='-'  || str[i]=='*'  && str[i]=='/'  || str[i]=='@' || str[i]=='#'){
        printf("%c\n",str[i]);
    }
  }
  return 0;
}
