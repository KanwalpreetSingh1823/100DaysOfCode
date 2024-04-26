#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle                         // HackerRank Problem
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;                
void sort_by_area(triangle* tr, int n) {
    double s,p;                          
    double arr[n];
    triangle temp_area;   // Declearing new object of triangle structure
	for(int i=0; i<n; i++){
        s=0;                            
        p = (tr[i].a+tr[i].b+tr[i].c)/2.0;
        s = sqrt(p * (p-tr[i].a) * (p-tr[i].b) * (p-tr[i].c));
        arr[i] = s;                     
    }
    for(int i=1; i<n; i++){               
        int j=i;
        while(j>0 && arr[j] < arr[j-1]){   // Applying Insertion Sort
            double temp = arr[j];          // Swap
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            
            temp_area = tr[j];
            tr[j] = tr[j-1];
            tr[j-1] = temp_area;
            j--;
        }
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}