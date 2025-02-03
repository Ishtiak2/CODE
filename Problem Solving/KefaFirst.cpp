#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec;
    
    long int prev = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        long int x;
        cin >> x;

        if(x >= prev) {
            count++;
            if(i == n - 1) vec.push_back(count);
        }    
        else {
            vec.push_back(count);
            count = 1;
        }

        prev = x;
    }

    auto max = max_element(vec.begin(),vec.end());

    cout<< *max ;
    
    return 0;
}