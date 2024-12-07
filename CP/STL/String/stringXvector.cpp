#include<bits/stdc++.h>
using namespace std;

//laxiographical issues
int main()
{
    //laxiographic comparison. It stops after finding a smaller character

    string s = "eeemon", t = "eemoin";

    if(s > t) cout << t <<" is smaller" << endl;
    else cout << s <<" is smaller" << endl;

    //laxiographically sorting

    vector<string> v;
    
    v.push_back("Ishtiak");
    v.push_back("Mahin");
    v.push_back("arnob");
    v.push_back("omor");


    sort(v.begin(), v.end()); //O(nlogn)

    for(auto u: v) cout << u << " "; cout << endl;

    v.erase(remove(v.begin(), v.end(), "omor"));
    for(auto u: v) cout << u << " "; cout << endl;

    return 0;
}