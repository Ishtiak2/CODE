#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Set of strings
    set<string> s;

    s.insert("Ishtiak");
    s.insert("Mahin");
    s.insert("Arnob");
    s.insert("Omor");

    cout << "Strings (lexicographically sorted):" << endl;
    for (auto u : s) cout << u << endl;

    // Set of pairs
    set<pair<int, int>> st;

    st.insert({2, 3});
    st.insert({4, 1});
    st.insert({2, 1});
    st.insert({4, 3});
    st.insert({5, 1});
    st.insert({5, 3});

    cout << "\nPairs (lexicographically sorted):" << endl;
    for (auto u : st) cout << u.first << " " << u.second << endl;

    // Set of integers in descending order
    set<int, greater<int>> se;

    se.insert(3);
    se.insert(1);
    se.insert(5);
    se.insert(4);
    se.insert(2);

    cout << "\nIntegers (sorted in descending order):" << endl;
    for (auto u : se) cout << u << endl;

    // Set of strings in descending order
    set<string, greater<string>> str;

    str.insert("Ishtiak");
    str.insert("Mahin");
    str.insert("Omor");
    str.insert("Arnob");
    str.insert("Saad");

    cout << "\nStrings (sorted in descending order):" << endl;
    for (auto u : str) cout << u << endl;

    // Set of pairs in descending order
    set<pair<int, int>, greater<pair<int, int>>> asd;

    asd.insert({2, 1});
    asd.insert({4, 1});
    asd.insert({1, 4});

    cout << "\nPairs (sorted in descending order):" << endl;
    for (auto u : asd) cout << u.first << " " << u.second << endl;

    return 0;
}
