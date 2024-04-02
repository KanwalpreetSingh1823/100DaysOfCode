#include<stdio.h>
int main(){
    char str[] = "Hello world\0";   // Here we use Null Character.
    int i=0;
    while(str[i]!='\0'){            // Loop will run upto the index of Null Character.
        printf("%c",str[i]);
        i++;
    }
    return 0;
}