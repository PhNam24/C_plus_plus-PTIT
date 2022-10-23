#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int a = 0, b = 0;
    for ( int i = 0 ; i < s.size(); i++ )
    {
        if ( s[i] == 'B' ) 
        {
            if ( a < b ) a++;
            else a = b + 1;
        }
        else
        {
            if ( a < b ) b = a + 1;
            else b++;
        }
    }
    cout << a;
    return 0;
}