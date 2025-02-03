#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long int a,b,c;
    int countS,countF;

    while(t--)
    {
        cin >> a >> b >> c;
        
        countS= 0;
        countF = 0;

        int f,s;
        bool flag = 0;

        for(long int i = 1; i < 2*b; i ++)
        {
            int x = a*i;
            int y;
            if(b >= i)
            {
                y = c;
            }

            else{
                if(i%b == 0)
                {
                    y = (i/b)*c;
                }

                else y = (i/b+1)*c;
            }

            if(x > y)
            {
                f = -1;
                s = i;
                countS++;

                if(countS !=0 && countF != 0)
                {
                    if(countS == 1)
                    {
                        s = i;
                        f = i -1;

                        //cout <<f <<" " << s;
                        break;
                    }

                    if(countF == 1)
                    {
                        f = i;
                        s = i - 1;

                        //cout <<f <<" " << s;
                        break;
                    }

                }
            }

            else if(x < y)
            {
                f = i;
                s = -1;
                countF++;

                if(countS !=0 && countF != 0)
                {
                    if(countS == 1)
                    {
                        s = i;
                        f = i -1;

                        //cout <<f <<" " << s;
                        break;;
                    }

                    if(countF == 1)
                    {
                        f = i;
                        s = i - 1;

                        //cout <<f <<" " << s;
                        break;
                    }

                }
            }

        }

        cout << f <<" " << s;

    }
    return 0;
}