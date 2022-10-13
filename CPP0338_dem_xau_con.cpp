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
        int k;
        cin >> s >> k;
        int ans = 0;
        for ( int i = 0; i < s.size(); i++ )
        {
            set<char> st;
            for ( int j = i; j < s.size(); j++ )
            {
                st.insert(s[j]);
                if ( st.size() == k ) ans++;
                if ( st.size() > k ) break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}