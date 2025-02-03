#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int count = 0;

        if(m > a) count = count+a;
        else count= count + m;

        if(m > b) count = count+b;
        else count= count + m;

        int rm = 2*m - count;

        if(rm > c) count = count+c;
        else count= count + rm;

        cout << count << endl;
    }
    return 0;
}