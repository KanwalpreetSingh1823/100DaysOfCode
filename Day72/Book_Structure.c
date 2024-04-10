#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int no_of_pages;
    } B1,B2;

    B1.no_of_pages = 200;
    B1.price = 499.99;
    strcpy(B1.name,"Greaves");

    B2.no_of_pages = 250;
    B2.price = 500;
    strcpy(B2.name,"Leadership");

    printf("%d\n",B1.no_of_pages);  // Printing the attributes of Book-1.
    printf("%.2f\n",B1.price);
    printf("%s\n",B1.name);
    return 0;
}