#include<bits/stdc++.h>
using namespace std;

int main()
{
    int* arr = new int[100];

    int n;
    cin >> n;

    vector<char> st(n);

    int k = 0;
    st[0] = '0';

    for(int i = 1; i <= n; i++)
    {
        int j = 0;

        while(cin >> arr[j])
        {
            if(arr[j] == 0) 
                break;

            j++;    
        }

        int size = j+1;

        sort(arr, arr+size);

        if (size > 1 && arr[1] < i)
        {
            cout << "-1" << endl;
            delete[] arr;
            return 0;
        }

        else
        {
            if(st[k] == '0')
            {
                st[k+1] = '1';
                k++;
            }
            else
            {
                st[k+1] = '0';
                k++;
            }
        }
    }

    for(int i = 0; i <= k; i++)
    {
        cout << st[i];
    }
    cout << endl;
    
    delete[] arr;
    return 0;
}
