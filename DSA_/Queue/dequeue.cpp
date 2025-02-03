#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(5);
    dq.push_back(6);
    
    for(auto u : dq) cout << u <<" ";
    cout << endl;

    //for(int i = 0; i < dq.size(); i++)
    //    cout << dq[i] <<" ";

    dq.pop_front();
    dq.pop_back();

    for(auto u : dq) cout << u <<" ";
    cout << endl;



    return 0;
}