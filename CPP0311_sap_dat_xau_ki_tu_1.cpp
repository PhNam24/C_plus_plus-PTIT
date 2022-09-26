#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        map<char, int> m;\
        int tmp = 0;
        for ( int i = 0; i < s.size(); i++ )
        {
            m[s[i]]++;
            tmp = max(m[s[i]], tmp);
        }
        if ( tmp <= s.size() - tmp + 1 ) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}