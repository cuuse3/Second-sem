#include<stdio.h>

int main()
{
    int a[5]={0,4,6,2,8,}, b[5]={1,5,7,3,9}, c[10];
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

    while(i<5 )
    {
        c[k++]=a[i++];
    }
    while(j<5 )
    {
        c[k++]=b[j++];
    }
    while (l<10 )
    {
        printf("%d ",c[l]);
        l++;
    }
}