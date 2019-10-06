// C program to detect comment from a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i ,j;
    printf("Enter a String: ");
    gets(str);
    int len = strlen(str);
    for(i = 0; i<len ; i++ ){
        if(str[i] == '/' && str[i+1] == '/') {
                printf("\nThere is a Comment");
            }
        else if(str[i]=='/' && str[i+1]=='*'){
            for( j=i+2;j<len;j++){
                if(str[j]=='*' && str[j+1]=='/'){
                    printf("\nThere is a Comment");
                }
            }
        }
    }
    return 0;
}
