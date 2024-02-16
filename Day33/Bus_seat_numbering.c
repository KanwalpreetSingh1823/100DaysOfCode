#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n>=1 && n<=10) printf("Lower Double");
        else if(n>=11 && n<=15) printf("Lower Single");
        else if(n>=16 && n<=25) printf("Upper Double");
        else if(n>=26 && n<=30) printf("Upper Single");
        printf("\n");
    }
    return 0;
}