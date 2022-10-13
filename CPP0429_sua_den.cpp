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
    int n, k, b;
    cin >> n >> k >> b;
    int a[100005] = {};
    for ( int i = 0; i < b; i++ )
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int cnt = 0;
    for ( int i = 0; i <= k; i++ )
    {
        if ( a[i] ) cnt++;
    }
    int ans = cnt;
    for ( int i = k + 1; i <= n; i++ )
    {
        cnt = cnt - a[i - k] + a[i];
        ans = min(ans, cnt);
    }
    cout << ans;
    return 0;
}