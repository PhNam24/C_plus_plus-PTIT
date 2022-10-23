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
        int n, k;
        cin >> n >> k;
        int a[n];
        int cnt = 0;
        for ( int &i : a ) 
        {
            cin >> i;
            if ( i <= k ) cnt++;
        }
        int cnt1 = 0;
        for ( int i = 0; i < cnt; i++ )
        {
            if ( a[i] > k ) cnt1++;
        }
        int ans = cnt1;
        for ( int i = cnt; i < n; i++ )
        {
            if ( a[i] > k ) cnt1++;
            if ( a[i - cnt] > k ) cnt1--;
            ans = min(ans, cnt1);
        }
        cout << ans;    
        cout << endl;
    }
    return 0;
}