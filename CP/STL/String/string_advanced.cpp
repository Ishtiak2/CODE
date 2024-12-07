#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    string str = "Servent Ishtiak";

    //Printing using iterator
    string:: iterator it;
    
    it = str.begin();

    for(it = str.begin(); it != str.end(); it ++)
        cout << *it;
    cout << endl;    

    //Printing using for each loop

    for(auto u: str ) cout << u; 
    cout << endl;

    reverse(str.begin(), str.end());
    cout << str <<endl;

    sort(str.begin(), str.end());
    cout << str << endl;

    sort(str.rbegin(), str.rend());

    //making the string unique

    string s = "dadsdsAAACsdsfda";
    sort(s.begin(), s.end());

    int sz = unique(s.begin(), s.end()) - s.begin();

    for(int i = 0; i < sz; i++) cout << s[i] ;

    cout << endl;

    cout <<"Max element: " << *max_element(s.begin(), s.end()) << endl;
    cout <<"Min element: " << *min_element(s.begin(), s.end()) << endl;

    //erase
    s.erase(s.begin()); //o(n)--every element is shifted to its previous element
    s.erase(s.end() - 1); //o(1) -- not shifting
    cout << s << endl;



    return 0;   

}