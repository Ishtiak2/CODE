#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int sum(string s){
    int sum = 0;
    for(auto i : s){
        int num = i - '0';
        sum += num;
    }

    return sum;
}

int main()
{
    optimize();
    int m,s;
    cin >> m >> s;

    string max;
    string min;
    for(int i = 0; i < m; i++){
        max+='9';
    }
    min+='1';
    
    for(int i = 1; i < m; i++){
        min+='0';
    }

    if(9*m > s){
        cout<< "-1 -1";
        return 0; 
    }

    int sumMax = sum(max);
    int sumMin = sum(min);

    if(sumMax != s){

    
    int i = m-1;
    while(i>= 0){
        if((sumMax - s) > 9){
            max[i] = '0';
            sumMax = sum(max); 
        }

        else{
            int x = max[i] - '0' - s;
            max[i] = x;
            sumMax = sum(max);
            if(sumMax == s){
                break;
            }

        }
        i--;
    }

    }

    if(sumMin != s){

    int j = m -1;
    while(j>= 0){
        if((s - sumMin) > 9){
            min[j] = '9';
            sumMin = sum(min); 
        }

        else{
            int x = s - min[j] - '0';
            min[j] = x;
            sumMin = sum(min);
            if(sumMin == s){
                break;
            }

        }
        j--;
    }
    }

    if(min[0] == '0' || max[0] == '0'){
        cout<<"-1 -1";
        return 0;
    }

    cout<<min <<" "<<max;

    return 0;
}