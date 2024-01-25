#include<stdio.h>
int main(){
    char ch; // for capital case
    for(int i=65; i<=90; i++){
        ch = (char)i;
        printf("%c --> %d\n",ch,i);
    }
    return 0;
}