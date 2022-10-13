#include <bits/stdc++.h>
#include <iostream>
#define test int t; cin >> t; while(t--)
#define endl '\n';
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream in("DATA.in");
    int a[1005] = {};
    int x;
    while(in >> x) a[x]++;
    for ( int i = 0; i < 1005; i++ )
    {
        if ( a[i] ) cout << i << " " << a[i] <<  endl;
    }
    return 0;
}