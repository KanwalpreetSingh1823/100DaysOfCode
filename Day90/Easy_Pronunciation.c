#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);             // Codechef Problem
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        int c = 0, flag = 0;
        for(int i=0; str[i]!='\0'; i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') c=0;
            else{
                c++;
                if(c>=4){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==1) printf("NO\n");
        else if(flag==0) printf("YES\n");
    }
    return 0;
}