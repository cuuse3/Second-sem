#include<stdio.h>

int main ()
{
    int a[5]={0,2,4,6,8}, b[5]={1,3,5,7,9}, c[10], temp;

    for(int i = 0; i<5; i++)
    {
        c[i]=a[i];
        c[i+5]=b[i];
    }
    
    for(int i = 0 ; i<10 ; i++)
    {
        for(int j = i+1 ; j<10 ; j++)
        {
            if(c[i]>c[j])
            {
                temp = c[i];
                c[i]=c[j];
                c[j]= temp;
                
            }
        }
    }
    printf("\nThe mreged array is : ");
    for(int i = 0; i<10; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n\n");
     
    return 0;
}