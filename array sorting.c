#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,temp;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) { 
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

     for(int i =0 ; i<n;i++)
    {
        printf("%d ",a[i]);
        
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
