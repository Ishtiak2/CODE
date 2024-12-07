#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< pair <string,int> > v;
    v.push_back({"Ishtiak", 10});
    v.push_back({"Mahin", 43});
    v.push_back({"Omor", 9});
    v.push_back({"Arnob", 30});
    v.push_back({"Ishtiak", 10});

    sort(v.begin(), v.end()); //laxiographically sorting

    //for( auto u : v) cout << u.first <<" " << u.second << endl;

    int sz = unique( v.begin(), v.end()) - v.begin();
    
    for(int i = 0; i < sz; i++)
        cout << v[i].first <<" " << v[i].second << endl;

    return 0;
}