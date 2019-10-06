#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

#define BUFFER_SIZE 1000

void readFile(FILE * f1);

void keyw(char *p);
int i=0,id=0,kw=0,num=0,op=0;
char keys[32][10]={"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
void main()
{
    char dataToAppend[BUFFER_SIZE];
    char ch,aziz,str[25],seps[15]=" \t\n,;(){}[]#\"<>",oper[]="!%^&*-+=~|.<>/?";
    int j,p;
    char fname[50];
    FILE *f1;
    level1:
    printf("Do you want to Read existing File ? Then press: 1\n");
    printf("Do you want to Create A File ? Then press: 2\n");
    printf("Do you want to Append Into A File ? Then press: 3\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &p);
    switch(p)
    {
        case 1:
       printf("\nEnter file path:  ");
       scanf("%s",fname);
       f1 = fopen(fname,"r");
       printf("\n");
       if(f1==NULL)
       {
          printf("File not found");
          exit(0);
       }
       while((ch=fgetc(f1))!=EOF)
       {
          for(j=0;j<=14;j++)
            {
            if(ch==oper[j])
            {
                printf("%c is an operator\n",ch);
                op++;
                str[i]='\0';
                keyw(str);
            }
        }
        for(j=0;j<=14;j++)
        {
            if(i==-1)
            break;
            if(ch==seps[j])
            {
                if(ch=='#')
                {
                    while(ch!='>')
                    {
                        printf("%c",ch);
                        ch=fgetc(f1);
                    }
                    printf("%c is a Header File\n",ch);
                    i=-1;
                    break;
                }
                if(ch=='"')
                {
                    do
                    {
                        ch=fgetc(f1);
                        printf("%c",ch);
                    }
                    while(ch!='"');
                        printf("\b is an Argument\n");
                        i=-1;
                        break;
                    }
                    str[i]='\0';
                    keyw(str);
            }
        }
        if(i!=-1)
        {
            str[i]=ch;
            i++;
        }
        else
            i=0;
      }
      printf("\n\nHere Total Keywords: %d\nHere Total Identifiers: %d\nHere Total Operators: %d\nHere Total Numbers: %d\n",kw,id,op,num);
      break;
      case 2:
         printf("Create file with .txt extension\n");
         scanf("%s",fname);
         f1 = fopen(fname,"a");
         if (f1 != NULL) {
            printf("File created successfully!\n");
         }
      break;
      case 3:
      printf("Enter file path: ");
      scanf("%s", fname);
      f1 = fopen(fname, "a");
      if (f1 == NULL)
      {
          printf("\nUnable to open '%s' file.\n", fname);
          printf("Please check whether file exists and you have write privilege.\n");
          exit(EXIT_FAILURE);
      }
      printf("\nEnter data to append in your file: ");
      fflush(stdin);
      fgets(dataToAppend, BUFFER_SIZE, stdin);

      fputs(dataToAppend, f1);

      f1 = freopen(fname, "r", f1);

      printf("\nSuccessfully appended data to file. \n");
      readFile(f1);

      fclose(f1);
      break;
      default:
      printf("\n!!You made an invalid choice!!\n");
   }
   printf ("\nDo you want to repeat the operation Y/N:   \n");
   scanf (" %c", &aziz);
   while (aziz != 'N' || aziz != 'n'){
      goto level1;
   }

}
void readFile(FILE * fPtr)
{
    char cb;

    do
    {
        cb = fgetc(fPtr);

        putchar(cb);

    } while (cb != EOF);
}
void keyw(char *p)
{
    int k,flag=0;
    for(k=0;k<=31;k++)
    {
        if(strcmp(keys[k],p)==0)
        {
            printf("%s is a Keyword\n",p);
            kw++;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        if(isdigit(p[0]))
        {
            printf("%s is a Number\n",p);
            num++;
        }
        else
        {

            if(p[0]!='\0')
            {
                printf("%s is an Identifier\n",p);
                id++;
            }
        }
    }
    i=-1;
}

