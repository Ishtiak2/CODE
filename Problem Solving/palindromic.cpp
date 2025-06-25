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

    while(t--) {

        ll n;
        cin >> n;
        string x;
        cin >> x;

        string result(n,'0');

        if(x[0] != '9') {
            for(int i = 0; i < n; i++) {
                result[i] = '9' - x[i] + '0';
            }
        }

        else {
            string str(n+1, '1');

            int borrow = 0;
            string sum = "";

            for(int i = n; i>= 1; i--) {
                int digit = (str[i] - '0') - (x[i-1] - '0') - borrow;

                if(digit < 0) {
                    digit = digit +10;
                    borrow = 1;
                }

                else {
                    borrow = 0;
                }

                sum = (char)(digit + '0') + sum;

            }
            result = sum;
        }

        cout << result << endl;

    }

    
    return 0;
}