#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[7];

    bool flag = false;
    int k = -1;

    int sum = 0;
    while(sum < n)
    {
        for(int i = 0; i < 7 ; i++)
        {
            if(flag == false)
                cin >> arr[i];

            sum = sum + arr[i];

            if(k == -1 && sum >= n) {
                k= i + 1;
            }        
        }

        if(k != -1) {
            cout << k;
            return 0;
        }

        flag = true;

    }

    return 0;
}