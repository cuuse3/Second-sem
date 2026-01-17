#include<stdio.h>

int main()
{
    int a[5]={0,2,4,6,8,}, b[5]={1,3,5,7,9}, c[10];
    int i = 0 , j = 0 , k = 0 , l =0;

    while(i<5 && j<5)
    {
        if(a[i]>b[j])
        {   
            c[k]=b[j];
            j++;
            k++;
        }
        else{ 

            c[k]=a[i];
            i++;
            k++;
        }
    }

    while (l<10 )
    {
        printf("%d ",c[l]);
        l++;
    }
}