#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {               // HackerRank Problem
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}
