#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("Enter string : ");
    // scanf("%[^\n]s",str);
    gets(str);
    printf("\n");
    printf("%s",str);
    return 0;
}