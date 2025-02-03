#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long int x, y, n;
    while(t--)
    {
        cin >> x >> y >> n;
        
        long int r = ( (n/x) * x) - (x - y);
        if(r < 0) cout << "0" << endl;
        else cout << r << endl;

    }
    
    return 0;
}