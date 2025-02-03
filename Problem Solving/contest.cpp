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

    while(t--)
    {
        int a[6];
        a[0] = 0;

        cin >> a[1] >> a[2] >> a[4] >> a[5];

        a[3] = a[2];    
        sort(a+1,a+6);

        a[3] = a[1]+a[2];
    
        
        int k= 0;
        int i = 1;

        while(i <=3 )
        {
            if(a[i] + a[i+1] != a[i+2]) {
                
                if(i!=3 && a[i] + a[i+1] == a[i+3])
                {
                a[i+2] = a[i+3];
                a[i+3] = a[i+2];
                }

                else break;
            }
            i++;
            k++;
        }

        cout << k << endl;    

    }
    
    return 0;
}

