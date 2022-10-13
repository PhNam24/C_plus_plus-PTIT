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
        int n, k;
        cin >> n >> k;
        int a[n];
        for ( int &i : a ) cin >> i;
        sort(a, a + n);
        ll cnt = 0;
        for ( int i = 0; i < n; i++ )
        {
            int tmp = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            if ( tmp == n ) tmp--;
            if ( a[tmp] > a[i] + k ) tmp--;
            while(a[tmp] == a[i] + k) tmp--;
            if ( tmp > i ) cnt += tmp - i;
        }
        cout << cnt << endl;
    }
    return 0;
}