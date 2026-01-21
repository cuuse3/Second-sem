#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,s,fnd=0,ind;
    scanf("%d",&n);
    int st[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&st[i]);
    }
    scanf("%d",&s);
    
    for(int i=0;i<n;i++)
    {
    if(s == st[i])
    {fnd=1; ind = i;}
    }
    if(fnd==0){printf("Not found");}
    else{
    printf("%d",ind);}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
