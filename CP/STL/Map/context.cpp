#include<bits/stdc++.h>
using namespace std;
//array can not be much longer
int cont[10006]; //initialized by zero

int main()
{
    vector <int> vec = {2,2,3,4,2};
    //assigning the frequency of elements of vector in an array cont.
    //indexes of cnt denotes the element of vector and value of index denotes the frequency of the corresponding element

    for(auto b : vec)
        cont[b]++;

    
    //using map
    
    vector <long long> v = {1,122332323333, 343455566, 122332323333, 343455566, 1, 2};
    map<long long, int> cnt;

    for(int i = 0; i < v.size(); i++)
    {
        cnt[v[i]]++;
    }

    //cout << cnt[343455566] <<" " << cnt[122332323333] << endl;
    for(auto u : cnt)
    {
        cout <<"Index- " << u.first <<" : " << u.second << endl;
    }

    return 0;




}