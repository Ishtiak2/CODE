#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;


    for(long int i = 0; i < t; i++)
    {
        long int n;
        cin >> n;

        long int arr[n];
        for(int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for(int k = 1; k < n-1; k ++)
        {
            arr[k-1] = arr[k-1] -1;
            arr[k+1] = arr[k+1] +1;

            for(int l = 0; l < n-1; l++)
            {
                if(arr[l] == arr[l+1]) cout <<"YES"<<endl;
                l=k = n-1;
            }

            
            arr[k-1]++;
            arr[k+1]++;
            

        }

        cout <<"No" << endl;

    }
    return 0;
}