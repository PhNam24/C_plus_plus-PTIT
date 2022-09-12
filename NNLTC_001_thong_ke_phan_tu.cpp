#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int x;
    int a[100000] = {};
    vector<int> v;
    while(cin >> x)
    {
        v.push_back(x);
        a[x]++;
    }
    for ( int i = 0; i < v.size(); i++ )
    {
        if ( a[v[i]] > 0 ) cout << v[i] << " " << a[v[i]] << '\n';
        a[v[i]] = 0;
    }
    return 0;
}