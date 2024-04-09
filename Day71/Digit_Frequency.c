#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char str[1000];
    scanf("%[^\n]s",str);    // HackerRank Problem
    int size = 0;
    int k = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    int freq[10] = {0};
    for(int i=0; i<size; i++){
        int x = str[i];   // x -> Ascii Value
        if(x>47 && x<58){
            freq[x-48] += 1;
        }
    }
    for(int j=0; j<=9; j++){
            printf("%d ",freq[j]);
        }
    return 0;
}