#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int b,s;
    vector<int> a ;
    cout << "Enter the Size of vector initially: " ;
    cin >> s;
    cout << "Enter " << s << " elements for the first vector:\n";
    for(int i = 0; i < s; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    
    
    a.push_back(120); 
    a.push_back(130); 

cout << "\n Vector elements before remove are: ";
    for(int i = 0; i < a.size() ; i++)
    {
        cout << a[i] << " ";
    }

    a.pop_back();
    a.erase(a.begin()+1);

    
    cout << "\n Vector elements after remove are: ";
    for(int i = 0; i < a.size() ; i++)
    {
        cout << a[i] << " ";
    }
    cout<<"\n";

    return 0;
}

