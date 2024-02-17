#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b || b>a || a==b){
            int c = a-b;
            if(c<0) c = c * -1;
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}