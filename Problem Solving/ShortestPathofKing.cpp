#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    string s,t;
    cin >> s >> t;

    int sx = s[0] - 'a' +1;
    int sy = s[1] - '0';

    int tx = t[0] - 'a' + 1;
    int ty = t[1] - '0';

    vector<string> moves;

    while(sx != tx || sy != ty){
        string move;

        if(sx < tx){
            move+='R';
            sx++;
        }

        if(sx > tx){
            move += 'L';
            sx--;
        }

        if(sy < ty){
            move+='U';
            sy++;
        }

        if(sy > ty){
            move+='D';
            sy--;
        }
        moves.push_back(move);
    }

    cout<<moves.size()<<endl;
    
    for(auto ch: moves){
        cout<<ch<<endl;
    }


    return 0;
}