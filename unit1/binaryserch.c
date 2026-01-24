#include <stdio.h>

int main() {
    int arr[] = {2, 5, 7,9,10,14, 17,19,24,28,31,33,36};
    int size = sizeof(arr) / sizeof(arr[0]);
    int cho ,mid;
    
    int low = 0, high = size - 1;
    int result = -1;


    printf("Enther your choice to serch : ");
    scanf(" %d",&cho);

    while (low <= high) {
        mid = (high + low) / 2;
        if(arr[mid] == cho )
        {
            result = mid ;
            break;
        }
        else if (arr[mid] < cho )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    
    }

    if(result == -1)
    {
        printf("The number you are trying to serch Not Found \n");

    }
    else
    {
        printf("the number is found at index %d \n ", result);
    }
    
    return 0;
}
