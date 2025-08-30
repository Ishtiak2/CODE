#include<bits/stdc++.h>
#include<fcntl.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    int fd = creat("newfile.txt", 0644); // permissions: rw-r--r--
    
    if (fd < 0) {
        cerr << "Error creating file" << endl;
        return 1;
    }
    return 0;
}