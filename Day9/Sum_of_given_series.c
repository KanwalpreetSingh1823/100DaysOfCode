#include<stdio.h>
int main(){      // 1 - 2 + 3 - 4 + 5 - 6 + ...... n terms.
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int even_sum = 0;
    int odd_sum = 0;
    if(n%2==0){
    even_sum = -(n/2);
    }
    else{
    odd_sum = -(n/2) + n;
    }
    int final_sum = even_sum + odd_sum;
    printf("%d",final_sum);
    return 0;
}