#include<bits/stdc++.h>
using namespace std;

void print(vector<int> vec)
{
    cout << "Vector: ";

    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] <<" ";

    cout << endl;    
}

int main()
{
    vector<int> vec;
    vec = {1,2,3,4,5,6};

    //deleting element by their address
    vec.erase(vec.begin() + 2); //o(n): every element shifted to its front elements index

    vec.erase( find(vec.begin(), vec.end(), 5));
    print(vec);


    vector<int> v(5);
    //vector resized to 9
    v.resize(9);
    cout << v.size() << endl;

    //vector sorting
    vec = {6,3,2,1,4,5,0};
    
    sort(vec.begin()+2, vec.end());
    print(vec);
    
    sort(vec.begin(), vec.end(), greater<int>() );
    print(vec);

    sort(vec.rbegin(), vec.rend());
    print(vec);
    
    //reversing vector

    reverse(vec.begin() , vec.end());
    print(vec);

    return 0;
}