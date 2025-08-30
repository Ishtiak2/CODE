#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

bool isVowel(char a) {
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') return 1;
    else return 0;
}

double editDistance(string& a, string& b) {
    ll lenA = a.size();
    ll lenB = b.size();

    vector<vector<double>> dp(lenB+1, vector<double> (lenA+1,0));

    for(ll i = 0; i <= lenA; i++) dp[0][i] = i;
    for(ll j = 0; j <= lenB; j++) dp[j][0] =j;

    for(ll i = 1; i <= lenB; i++) {
        
        double ans = 0;

        for(ll j = 1; j <= lenA; j++) {
            if(b[i-1] != a[j-1]){
                
                ans = min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
                
                if(ans == dp[i-1][j-1]){
                    
                    if(isVowel(b[i-1]) && isVowel(a[j-1])) {
                        dp[i][j] = ans + 0.5;
                        //cout << "Replace " <<b[i-1] <<" with " << a[j-1] << endl;
                    }

                    else if((isVowel(b[i-1]) && !isVowel(a[j-1]))||(!isVowel(b[i-1]) && isVowel(a[j-1]))) {
                        dp[i][j] = ans + 2.0;
                        //cout << "Replace " <<b[i-1] <<" with " << a[j-1] << endl;

                    }

                    else if(!isVowel(b[i-1]) && !isVowel(a[j-1])) dp[i][j] = ans + 1.0;
                    //cout << "Replace " <<b[i-1] <<" with " << a[j-1] << endl;

                }

                else {
                    dp[i][j] = ans + 1.0;
                    //cout <<"Insert or Delete" << endl;

                }    


            }

            else {
                dp[i][j] = dp[i-1][j-1];
                //cout <<"Same" << endl;

            }
            
        }
        
    } 
    cout << "Minimum Distance: ";
    return dp[lenB][lenA];
}


int main()
{
    optimize();
    string a,b;
    cin >> a >> b;

    cout << editDistance(a,b) << endl;

    return 0;
}