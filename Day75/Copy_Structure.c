#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Book{
        char name[25];
        int pages;
    } Book;

    Book B1,B2;
    B1.pages = 300;
    strcpy(B1.name,"Greaves");

    B2 = B1;  //Coping one structure into another and it creates a deep copy.
    printf("%s\n",B2.name); // Printing attributes of B2
    printf("%d",B2.pages);
    return 0;
}