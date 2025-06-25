
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;

    mp.insert({2, 1});
    mp.insert({1, 40});
    mp.insert({3, 60});
    mp.insert({4, 20});
    mp.insert({5, 50});
    mp.insert({1,20});
    
    int key1 = 1;
    int key2 = 9;

    // Counting the occurrence of key1 and key2
    int cnt1 = mp.count(key1);
    int cnt2 = mp.count(key2);

    cout << "Count of " << key1 << ": " <<
      cnt1 << endl;
    cout << "Count of " << key2 << ": " <<
      cnt2 << endl;

    return 0;
}