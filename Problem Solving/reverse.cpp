#include<bits/stdc++.h>
using namespace std;

int reverse(int n,int cnt){
    int x = 0;
    int y = cnt -1;
    while(n!= 0){
        int digit = n % 10;
        
        x = x+ (digit * pow(10,y));
        y--;
        n = n /10;
    }

    return x;
}


int main()
{
    int n;
    cin >> n; //scanf

    int count = 0;
    int x = n;

    while(x != 0){
        count++;
        x = x/10;
    }

    //cout<<count<<endl;

    int z = reverse(n,count);
    cout<<z<<endl;

    return 0;
}