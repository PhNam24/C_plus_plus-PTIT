#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ifstream in("DATA.in");
    int n, m;
    in >> n >> m;
    int a[n], b[m];
    set<int> s1, s2;
    for ( int &i : a ) 
    {
        in >> i;
        s1.insert(i);
    }
    for ( int &i : b ) 
    {
        in >> i;
        s2.insert(i);
    }
    for ( auto i : s1 )
    {
        if ( s2.find(i) != s2.end() ) cout << i << " ";
    }
    return 0;
}