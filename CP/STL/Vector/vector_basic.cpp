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

    vec.push_back(7);
    vec.pop_back();

    print(vec);
    
    //clearing vector
    vec.clear();
    cout <<"After clearing, vector size: " << vec.size() << endl;

    //initializing vectors element 5
    vector<int> vecto(7,5);
    print(vecto);

    //copying vector
    vector<int> temp;
    temp = vecto;
    print(temp);

    //Vector iterator works for pointer of the vector
    //Printing using vector iterator
    vec = {1,2,3,4,5};
    vector<int> :: iterator it;

    for(it = vec.begin(); it != vec.end(); it++)
       cout << *it <<" ";

    cout << endl;   

    //using for-each loop

    for(auto u: vec) cout << u <<" "; //auto: used as variable type initialized before
    cout << endl;


    return 0;
}