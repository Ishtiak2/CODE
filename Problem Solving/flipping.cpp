#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n;
    cin >> n;

    int arr[n];
    
    vector<int> ans;
    int countStable = 0;
    int countOne = 0;

    for(int i= 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            countStable++;
        }
    }
    

    for(int i = 0; i < n; i++){
        countOne= countStable;
        
        for(int j = i; j < n; j++){
            if(arr[j] == 1){
                countOne--;
            }
            else{
                countOne++;
            }
            //cout<<"one: " <<i<< j<<" "<<countOne<<endl;
            ans.push_back(countOne);
        }
    }
    int max = 0;
    for(auto it: ans){
        if(it > max){
            max = it;
        }
    }
    cout<<max;
    return 0;
}