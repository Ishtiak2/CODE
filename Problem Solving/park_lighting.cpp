#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
       int r , c;
       cin >> r >> c;

       if(c%2 != 0) {
        
        if(r % 2 != 0) {
            cout << (c/2 * r) + (r/2) + 1 << endl;
        }

        else
            cout << (c/2 * r) + (r/2) << endl;
       
       }

       else cout << (c/2 * r) << endl;

    }
    return 0;
}