#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;
        bool flag = false;

        if(str[0] == 's') cout <<"Yes" << endl;
        else if(str[n-1] == 'p') cout <<"Yes" << endl;
        
        else if(str[0] == '.') {
            
            for(int i = 0; i < n; i++)
            {
                if(str[i] != '.')
                {
                    cout <<"No" << endl;
                    flag = true;
                    break;
                }   
            }
            if(flag == false)
            cout <<"Yes" << endl;
        }
        else if(str[0] != '.') cout <<"No" << endl;
    }
    return 0;
}