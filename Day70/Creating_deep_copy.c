#include<stdio.h>
int main(){
    char s1[] = "Hello World";
    int size = 0;
    int k=0;
    while(s1[k]!='\0'){
        size++;
        k++;
    }
    char s2[size];
    for(int i=0;i<size;i++){
        s2[i] = s1[i];
    }
    s1[0] = 'B';
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}