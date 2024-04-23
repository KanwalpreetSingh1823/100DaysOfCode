#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);     // Codechef Problem
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        if(x<y && x<z) printf("Alice\n");
        else if(y<x && y<z) printf("Bob\n");
        else printf("Charlie\n");
    }
    return 0;
}