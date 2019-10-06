#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

  int i,flag=0,x;

  char key[32][10]={"auto","double","int","struct","break","else",
  "long","swith","case","enum","register","typedef","char","extern",
  "return","union","const","float","short","unsigned","continue",
  "for","signed","void","default","goto","sizeof","volatile","do",
  "if","static","while"};

  char str[10];

  printf("\nEnter A string :");
  gets(str);
  for(i=0;i<5;i++){
    x = strcmp(str,key[i]);
    if(x==0)
    flag=1;
  }
  if(flag==0) {
    printf("\nIt is not a keyword");
  }
  else {
    printf("\nIt is a keyword");
  }
  getch();
  return 0;
}
