#include <stdio.h>
void greatest(int a,int b,int c,int d){   // HackerRank Problem.
    if(a>b){
        if(a>c){
            if(a>d){
                printf("%d",a);
            }
            else{
                printf("%d",d);
            }
        }
        else{
            printf("%d",c);
        }
    }
    else if(b>c){
        if(b>d){
            printf("%d",b);
        }
        else{
            printf("%d",d);
        }
    }
    else if(c>d){
        printf("%d",c);
    }
    else{
        printf("%d",d);
    }
    return;
}
int main(){
    int a,b,c,d;
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    greatest(a,b,c,d);
    return 0;
}