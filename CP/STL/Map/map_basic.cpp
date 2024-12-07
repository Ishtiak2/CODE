#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> id; //string -> index , int -> value

    id["Ishtiak"] = 10;
    id["Mahin"] = 43;
    id["Arnob"] = 30;
    id["Omor"] = 9;  // log2(size of map)

    cout <<id["Ishtiak"] << endl;

    //index is sorted
    for(auto u: id) cout <<"Index- " << u.first <<" : " << u.second << endl;

    map<string, string> gender;
    
    gender["Ishtiak"] = "male";
    cout << gender["Ishtiak"] << endl;



    return 0;
}