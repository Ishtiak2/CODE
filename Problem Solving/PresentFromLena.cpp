#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 1;
    for(int i = 0; i <= n; i ++)
    {
        for(int j = 0; j < 2*(n-i); j++)
        {
            cout<<" ";
        }
        int y = -1;
        
        for(int k = 0; k < x; k++)
        {

            if(k <= ( (x+1)/2 ) )
            {
                if(k%2 != 0) cout <<" ";
                else {
                    y++;
                    cout << y;
                }
                
            }

            else{

                if(k%2 != 0) cout <<" ";
                
                else {
                    y--;
                    cout<<y;
                }
            }
        }

        x+=4;
        cout << endl;
    }

    
    x = x-8;
    int z = 2;
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < z; j++)
        {
            cout<<" ";
        }
        
        
        int y = -1;
        
        for(int k = 0; k < x; k++)
        {

            if(k <= ( (x+1)/2 ) )
            {
                if(k%2 != 0) cout <<" ";
                else {
                    y++;
                    cout << y;
                }
                
            }

            else{

                if(k%2 != 0) cout <<" ";
                
                else {
                    y--;
                    cout<<y;
                }
            }
        }

        x-=4;
        z+=2;
        cout << endl;
    }

    return 0;
}