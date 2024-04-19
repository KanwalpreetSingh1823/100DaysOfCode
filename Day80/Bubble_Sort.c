#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, c=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++){
        bool flag = true;   // we use this to optimize the code
        for(int j=0; j<n-1-i; j++){  // (n-1-i) is used to reduce the noOfOps.
            if(arr[j] > arr[j+1]){   // but time complexity remain same.
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        c++;   // number of passes
        if(flag) break;
    }
    printf("\nAfter Sorting : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n%d",c);
    return 0;
}