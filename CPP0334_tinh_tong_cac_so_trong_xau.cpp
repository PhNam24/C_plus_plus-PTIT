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
    test
    {
        string s;
        cin >> s;
        s += 'a';
        int tmp = 0, ans = 0;
        for ( int i = 0; i < s.size(); i++ )
        {
            if ( isdigit(s[i]) ) tmp = tmp * 10 + (s[i] - '0');
            else 
            {
                ans += tmp;
                tmp = 0;
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}   