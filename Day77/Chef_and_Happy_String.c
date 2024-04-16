#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000], c=0;
        scanf(" %[^\n]s",s);
        for(int i=0; s[i]!='\0';i++){
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')&&(s[i+2]=='a'||s[i+2]=='e'||s[i+2]=='i'||s[i+2]=='o'||s[i+2]=='u')){
                c++;
            }
        }
        if(c>0) printf("Happy\n");
        else printf("Sad\n");
    }
    return 0;
}