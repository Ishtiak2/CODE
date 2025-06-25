#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;



int main()
{
    optimize();
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int pair = 0;
        int open = 0;

        for(int  i = 0; i < s.length(); i++){
            if(s[i] == '('){
                open ++;
            }

            if(s[i] == ')' && open > 0){
                pair++;
                open--;
            }
        }
        

        //cout<<"Count: "<< count << endl;
        
        int unpair = (n - (pair*2))/2;
        cout<< unpair << endl;
        
    }
    return 0;
}