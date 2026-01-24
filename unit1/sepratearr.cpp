#include<iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) ;
    
    int even[n], odd[n];
    int evenCount = 0, oddCount = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    
    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }
    
    cout << "\nOdd numbers: ";
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;
    
    return 0;
}