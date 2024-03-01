#include <stdio.h>
int main(){                     // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int w,x,y,z;
        scanf("%d %d %d %d",&w,&x,&y,&z);
        if(x+y==w || y+z==w || x+y+z==w || x+z==w) printf("Yes\n");
        else if(w==x || w==y || w==z) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}