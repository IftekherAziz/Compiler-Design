//White Space Count
#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i,count=0;
    printf("\nEnter any string :");
    gets(str);
    int len =strlen(str);
    for(i=0;str[i];i++)
    if(str[i] == ' '){
        count++;
    }
    printf("\nTotal White spaces :%d",count);
    return 0;
}
