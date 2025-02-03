#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long int k,l1,r1,l2,r2;

    while(t--)
    {
        cin >> k >> l1 >> r1 >> l2 >> r2;

        int Nmax = log(r2)/log(k);
        int Xmin = l2/pow(k,Nmax);

        if(Xmin <= l1) Xmin = l1;

        int Xmax = r2/k;
        if(Xmax >= r1) Xmax = r1;

        int count = 0;
        int Nmin;

        cout<<"X max: " <<Xmax << endl <<"X min: " << Xmin << endl;
        for(int x = Xmin; x <= Xmax; x++)
        {
            Nmax = ( log(r2) - log(x) )/ log(k);
            Nmin = (log(l2) - log(x)) / log(k);
            if(Nmin <= 0) Nmin = 0;

            if( (x*k) >= l2 && (x*k) <= r2) count = count + (Nmax - Nmin+1); 
            else count = count + (Nmax - Nmin);
            cout << count <<" ";
        }

        cout <<"Final: " << count << endl;

    }

    return 0;
}