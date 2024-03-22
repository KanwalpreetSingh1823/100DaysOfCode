#include <stdio.h>
int main() {  
    int t;                               // Codechef Array Problem
    scanf("%d", &t);                     
    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int arr[n];
        int sum1 = 0 ,sum2=0;
        for (int i = 0; i < n; i++) {           // Taking Input and add the values..
            scanf("%d", &arr[i]);              
            sum1 += arr[i];
        }
        for(int i=0; i<n; i++){                // Reduce values by 'y' and then add values again..
            arr[i] -= y;
            if(arr[i]<0) arr[i] = 0;
            sum2 += arr[i];
        }
        if(sum2 + x < sum1) printf("COUPON\n");       // Print Result
        else printf("NO COUPON\n");
    }
    return 0;
}