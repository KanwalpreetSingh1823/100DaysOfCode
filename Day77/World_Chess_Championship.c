#include <stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,cs=0,cc=0,cd=0,result=0;
        scanf("%d",&x);
        char str[15];
        scanf(" %[^\n]s",str);
        for(int i=0; str[i]!='\0'; i++){
            if(str[i]=='C') cc+=2;
            else if(str[i]=='N') cs+=2;
            else cc++, cs++;
        }
        if(cc > cs) result = 60 * x;
        else if(cc == cs) result = 55 * x;
        else result = 40 * x;
        printf("%d\n", result);
    }
    return 0;
}