#include<bits/stdc++.h>
using namespace std;

//non unique element can be within a multiset
//sorted
int main()
{
    multiset<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(4);

    cout <<"Size: " << s.size() << endl;

    for(auto u : s) cout << u << " ";
    cout << endl;

    cout <<"1 is available " << s.count(1) <<" times." << endl;

    s.erase(1); //delete all 1 from the multiset
    
    for(auto u : s) cout << u << " ";
    cout << endl;

    //Deleting only one element

    auto it = s.find(2);
    s.erase(it);

    for(auto u : s) cout << u << " ";
    cout << endl;

    return 0;
}