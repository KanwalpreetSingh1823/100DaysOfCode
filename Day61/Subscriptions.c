#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,a,b;
        scanf("%d %d",&n,&x);
        if(n>6){
            if(n%6==0){
                a=n/6;
                printf("%d\n",a*x);
            }
            if(n%6!=0){
                b = n/6 + 1;
                printf("%d\n",b*x);
            }
        }
        else{
            printf("%d\n",x);
        }
    }
    return 0;
}