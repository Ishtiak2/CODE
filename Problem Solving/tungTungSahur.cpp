#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll t;
    cin >> t;

    while(t--) {
        string p,s;
        cin >> p;
        cin >> s;
        bool flag = false;
        bool check = false;

        ll c = 0;

        ll cp = -1;
        ll cs = -1;

        vector<ll> countP;
        vector<ll>countS;

        for(ll i = 0; i < p.length(); i++) {
            

            if(p[i] == 'L'){
                
                if(check){
                    countP.push_back(0);
                    cp++;
                }

                check = false;
                c++;

                if(i == p.length()-1){
                    countP.push_back(c);
                    cp++;
                }    
            }    
            
            else {
                
                if(!check && i != 0){
                    countP.push_back(c);
                    cp++;
                }    
                
                if(i == p.length() - 1) {
                    countP.push_back(0);
                    cp++;
                }

                c = 0;
                check = true;;
            }

        }
        
        check = false;
        c = 0;

        for(ll i = 0; i < s.length(); i++) {
            
            if(s[i] == 'L'){
                
                if(check){
                    countS.push_back(0);
                    cs++;
                }

                check = false;
                c++;

                if(i == s.length()-1){
                    countS.push_back(c);
                    cs++;
                }    
            }    
            
            else {
                

                if(!check && i != 0){
                    countS.push_back(c);
                    cs++;
                }    
                
                if(i == s.length() - 1) {
                    countS.push_back(0);
                    cs++;
                }

                c = 0;
                check = true;;
            }

        }

        if(cp != cs){
            cout <<"NO" << endl;
            continue;
        }


        for(ll i = 0; i <= cp; i++) {
            
            if(countP[i] != 0 && (countP[i] > countS[i] || countP[i]* 2 < countS[i] )) {
                flag = true;
                break;
            }
        }

        if(flag){
            cout <<"NO" << endl;
            continue;
        }
        
        //second stage.
        
        c=0;
        cp = -1;
        cs = -1;
        check = false;
        countP.clear();
        countS.clear();

        for(ll i = 0; i < p.length(); i++) {
            

            if(p[i] == 'R'){
                
                if(check){
                    countP.push_back(0);
                    cp++;
                }

                check = false;
                c++;

                if(i == p.length()-1){
                    countP.push_back(c);
                    cp++;
                }    
            }    
            
            else {
                
                if(!check && i != 0) {
                    countP.push_back(c);
                    cp++;

                }    
                
                if(i == p.length() - 1) {
                    countP.push_back(0);
                    cp++;
                }

                c = 0;
                check = true;;
            }

        }
        
        check = false;
        c = 0;

        for(ll i = 0; i < s.length(); i++) {
            
            if(s[i] == 'R'){
                
                if(check){
                    cs++;
                    countS.push_back(0);
                }

                check = false;
                c++;

                if(i == s.length()-1){
                    countS.push_back(c);
                    cs++;
                }    
            }    
            
            else {
                

                if(!check && i !=0) {
                    countS.push_back(c);
                    cs++;
                }    
                
                if(i == s.length() - 1) {
                    countS.push_back(0);
                    cs++;
                }

                c = 0;
                check = true;;
            }

        }

        if(cp != cs) {
            cout <<"NO" << endl;
            continue;
        }

        for(ll i = 0; i <= cp; i++) {
            if(countP[i] != 0 && (countP[i] > countS[i] || countP[i]* 2 < countS[i] )) {
                flag = true;
                break;
            }
        }

        if(flag){
            cout <<"NO" << endl;
            continue;
        }

        else cout <<"YES" << endl;


        
    }
    return 0;
}