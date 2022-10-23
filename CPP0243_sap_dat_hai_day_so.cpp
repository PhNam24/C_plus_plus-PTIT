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
    test
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        map<int, int> mp;
        for ( int &i : a ) 
        {
            cin >> i;
            mp[i]++;
        }
        for ( int &i : b ) cin >> i;
        vector<int> ans;
        for ( int i = 0; i < m; i++ )
        {
            int tmp = mp[b[i]];
            for ( int j = 0; j < tmp; j++ )
            {
                ans.push_back(b[i]);
                mp[b[i]]--;
            }
        }
        sort(a, a + n);
        for ( int i = 0; i < n; i++ )
        {
            if ( mp[a[i]] > 0 ) ans.push_back(a[i]);
        }
        for ( auto i : ans ) cout << i << " ";
        cout << endl;
    }
    return 0;
}