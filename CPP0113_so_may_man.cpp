#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int check( string s )
{
    if ( s[s.length() - 1] != '6' || s[s.length() - 2] != '8' ) return 0;
    return 1;
} 

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        cout << check(s );
        cout << '\n';
    }
    return 0;
}