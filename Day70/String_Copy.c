#include<stdio.h>
int main(){
    char s1[] = "Hold";
    char *s2 = s1;    // Creating a Shallow Copy
    s1[0] = 'B';
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}