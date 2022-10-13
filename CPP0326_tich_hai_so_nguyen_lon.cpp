#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define endl '\n';
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        string a, b;
        cin >> a >> b;
        vector<int> ans;
        ans.resize(a.size() + b.size() + 1, 0);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for ( int i = 0; i < a.size(); i++ )
        {
            for ( int j = 0; j < b.size(); j++ )
            {
                ans[i + j] += (a[i] - '0') * (b[j] - '0');
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;
            }
        }
        int idx = ans.size() - 1;
        for ( ; idx >= 0; idx-- )
        {
            if (ans[idx]) break;
        }
        if ( idx == -1 ) idx = 0;
        for ( int i = idx; i >= 0; i-- )
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}