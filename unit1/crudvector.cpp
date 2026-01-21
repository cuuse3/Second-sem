#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int b;
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
    for(size_t i = 0; i < a.size() ; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

