#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int fib(int n)
{
    if(n== 0) return 0;
    if(n==1) return 1;

    int sum = 0;
    int a = 0;
    int b = 1;
    
    while(n >=2 )
    {
        
        sum = a+b;
        a= b;
        b= sum;
        
        n--;
    }

    return sum;
}

int fibonacci(int n)
{
    if(n == 2 || n == 1) return 1;
    if(n== 0 ) return 0;

    return fibonacci(n-1) + fibonacci(n-2);

}

int main()
{
    optimize();

    for(int i = 0; i <= 10; i++)
    {
        cout << fib(i) <<" ";
    } cout << endl;

    //cout << fib(6) << endl;

    return 0;
}

