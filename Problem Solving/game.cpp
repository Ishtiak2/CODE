#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,m;
    cin >> n >> m;

    if(m % n != 0)
    {
        cout <<"-1"<<endl;
        return 0;
    }

    int count = 0;
    
    int r = m/n;
    double rd = m/n;

    while(r > 1)
    {

        if(r % 2 != 0 && r % 3 != 0)
        {
            cout <<"-1"<<endl;
            return 0;
        }

        double logTwo = log(rd)/log(2);
        //cout << logTwo << endl;

        double logThree =  log(rd)/log(3);
        //cout << logTwo << endl;

        if(( fmod(rd, logTwo) ) == 0)
        {
            count = count + logTwo;
            break;
        }

        if(( fmod(rd, logThree) ) == 0)
        {
            count = count + logThree;
            break;
        }
        

        if( r % 2 == 0)
        {
            count ++;
            r = r/2;
            rd = rd/2;
        }

        if( r % 3 == 0)
        {
            count++;
            r = r/3;
            rd = rd/3;
        }
    }

    cout << count << endl;

    return 0;
}