#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n,t;
    cin >> n >> t;

    vector<vector<int>> adjList(n);
    adjList[0].push_back(0);

    int x;
    for(int i = 1; i <= n-1; i++){
        cin >> x;
        adjList[i].push_back(i+x);
        //adjList[x].push_back(i);

    }

    vector<bool> visited(n,0);
    stack<int> st;

    int node = 1;
    st.push(1);
    visited[1]=true;

    while(!st.empty()){
        x = st.top();
        node = x;
        //cout<<node<<endl;
        st.pop();
        
        if(node == t) {
            cout <<"YES";
            return 0;
        }

        for(auto it: adjList[node]){
            if(!visited[it]){
                st.push(it);
                visited[it] = true;
            }
        }
    }

    cout<<"NO";

    return 0;
}