#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int a = n;
    for(int i = 1 ; i <= n; i++)
    {
        for(int j = 1; j <= a ; j++)
        {
            if((i+j)> n ) cout <<"*";

            else cout <<" ";
        }
        a++;
        cout << endl;
    }
    
    return 0;
}