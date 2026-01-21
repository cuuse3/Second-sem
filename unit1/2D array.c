#include <stdio.h>

int main() {
    int row, col;
    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    
    int arr[row][col];
    
    printf("Enter elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The 2D array is:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}