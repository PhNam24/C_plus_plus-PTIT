#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int check (string s)
{
    for ( int i = 0; i < s.size(); i++ )
    {
        if ( s[i] != '0' && s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8' ) return 0;
        else 
        {
            if (s[i] != s[s.size() - 1 - i]) return 0;
        }
    }
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
        if (check(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}