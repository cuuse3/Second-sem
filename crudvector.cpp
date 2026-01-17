#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int b, c;
    vector<int> a ;
    cout << "Enter 5 elements for the first vector:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> b;
        a.push_back(b);
    }
 
    a.push_back(120); 
    a.push_back(130); 
    a.pop_back();

    cout << "Vector elements are: ";
    for(int i = 0; i < 6 ; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

