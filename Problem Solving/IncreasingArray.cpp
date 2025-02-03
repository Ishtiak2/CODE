#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long int prev, count, x;
    count = 0;
    
    cin >> x;
    prev = x;

    for(int i = 1; i < n; i ++)
    {
        cin >> x;

        if( prev - x > 0)
        {

            count += (prev - x);
            prev = x + (prev - x);
        }
        
        else prev = x;
    }

    cout << count ;
}