#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main () {
	int n;
	cin >> n;
	int Max = n;
	if (n/10 > Max) Max = n/10;
	if (n%10 + (n/100)*10 > Max) Max = n%10 + (n/100)*10;
	cout << Max;
}
