#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int , char> one;
    one.first = 100;
    one.second = 'A';

    cout << one.first << " ";
    cout << one.second << endl;

    pair<string , string> two("Name" , "Ishtiak");
    cout << two.first <<" " <<two.second << endl;

    pair<string , int> three;
    three = make_pair("Reg" , 2022831010);
    cout << three.first << " " <<three.second << endl;

    

    return 0;
}
