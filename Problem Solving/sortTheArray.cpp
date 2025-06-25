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

    vector<int> arr(n);
    cin >> arr[0];
    int prev = arr[0];
    int x,index = 0;
    
    bool flag = false;

    for(int i = 1; i < n; i++){
        cin >> arr[i];
        
        if(prev > arr[i] && !flag){
            //x = arr[i];
            index = i-1;
            flag = true;
        }

        prev = arr[i];
    }
    
    //cout<<"index: "<<index<<endl;

    int idx = 0;

    for(int i = 0; i < n;i++){
        if(arr[index] < arr[i]){
            idx = i-1;
            break;
        }
        idx = n-1;
    }

    //cout<<idx<<endl;
    
    if(index >= idx){
        for(int i = idx, j = index; i < j; i++){
            swap(arr[i],arr[j]);
            j--;
        }

        for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            cout<<"no";
            return 0;
        }
        }
        cout<<"yes"<< endl << idx+1 <<" "<< index+1;

    }

    else{
        for(int i = index, j = idx; i < j;  j--){
            swap(arr[i],arr[j]);
            i++;
        }

        for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            cout<<"no";
            return 0;
        }
        }
        cout<<"yes"<< endl << index+1 <<" "<< idx+1;
    }

    
    return 0;
}