#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s = {1, 1, 3, 3, 2, 2};
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(5);

    cout << "Initial set contents (duplicates removed): ";
    for (auto u : s) cout << u << " ";
    cout << endl;

    cout << "\nUsing iterator to display set contents: ";
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    if (s.count(4) == 1) 
        cout << "\nElement 4 is available in the set." << endl;
    else
        cout << "\nElement 4 is not available in the set." << endl;

    cout << "\nErasing element 3, the first element, and the last element..." << endl;
    s.erase(3);            // Removes element `3`
    s.erase(s.begin());    // Removes the first element (`1`)
    s.erase(--s.end());    // Removes the last element (`5`)

    cout << "Set contents after erasing: ";
    for (auto u : s) cout << u << " ";
    cout << endl;

    return 0;
}
