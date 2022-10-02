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
        string s, s1;
        cin >> s;
        s += 'a';
        int ans = 0;
        for ( int i = 0; i < s.size(); i++ )
        {
            if ( isdigit(s[i]) ) ans += s[i] - '0';
            else s1.push_back(s[i]);
        }
        s1.pop_back();
        sort(s1.begin(), s1.end());
        cout << s1;
        cout << ans;
        cout << endl;
    }
    return 0;
}   