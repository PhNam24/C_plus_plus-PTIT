#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int check ( string s )
{
    for ( int i = 0; i < s.size(); i++ )
    {
        if ( s[i] < s[i-1] ) return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        if ( !check(s) ) cout << -1;
        else
        {
            int idx = s.size() - 1;
            for ( int i = s.size() - 1; i >= 0; i-- )
            {
                if ( s[i] < s[i-1] )
                {
                    idx = i;
                    break;
                }
            }
            int m = idx;
            char max = s[idx];
            for ( int i = idx + 1; i < s.size(); i++ )
            {
                if ( s[i] > max && s[i] < s[idx - 1] )
                {
                    m = i;
                    max = s[i];
                }
            }
            swap(s[idx - 1], s[m]);
            if ( s[0] == '0' ) cout << -1;
            else cout << s;
        }
        cout << endl;
    }
    return 0;
}