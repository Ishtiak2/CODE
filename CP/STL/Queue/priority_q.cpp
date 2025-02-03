#include<bits/stdc++.h>
using namespace std;

//O(log2n)
//Prioritize bigger element

int main()
{
    priority_queue<int> pq;
    
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(4);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;

    //for each loop doesn't work here

    while(!pq.empty())
    {
        cout << pq.top() <<" ";
        pq.pop();
    }



    return 0;
}