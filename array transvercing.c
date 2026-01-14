#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i =0 ; i<n; i++)
    {
    printf("%d\t",a[i]);
    }
    return 0;
    
}