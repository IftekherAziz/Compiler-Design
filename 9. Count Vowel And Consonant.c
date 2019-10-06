// C program to finding vowel and consonant from a string
#include <stdio.h>

int main()
{
  int i = 0, vow = 0,con =0;
  char str[1000];

  printf("Input a string: ");
  gets(str);

  while (str[i] != '\0') {
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] =='o' || str[i]=='O' || str[i] == 'u' || str[i] == 'U'){
       vow++;
       i++;
    }
    else if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
       con++;
       i++;
    }

  }
  printf("\nNumber of vowels in the string = %d\n", vow);
  printf("\nNumber of consonant in the string = %d", con);

  return 0;
}
