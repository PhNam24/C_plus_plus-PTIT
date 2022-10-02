#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

void min ( int m, int s )
{
    vector<int> v(m);
    s--;
    for ( int i = m - 1; i > 0; i-- )
    {
        if ( s > 9 ) 
        {
            v[i] = 9;
            s -= 9;
        }
        else 
        {
            v[i] = s;
            s = 0;
        }
    }
    v[0] = s + 1;
    for ( int i : v ) cout << i;
    cout << " ";
}

void max ( int m, int s )
{
     vector<int> v(m);
    for ( int i = 0; i < m; i++ )
    {
        if ( s > 9 ) 
        {
            v[i] = 9;
            s -= 9;
        }
        else 
        {
            v[i] = s;
            s = 0;
        }
    }
    for ( int i : v ) cout << i;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int m, s;
    cin >> m >> s;
    if (s > 9 * m || (s == 0 && m > 1)) cout << "-1 -1";
    else 
    {
        min(m, s);
        max(m, s);
    }
    return 0;
}