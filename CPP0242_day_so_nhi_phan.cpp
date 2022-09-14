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
        int n;
        cin >> n;
        int a1[n], a2[n];
        int ans = -1;
        for ( int &i : a1 ) cin >> i;
        for ( int &i : a2 ) cin >> i;
        for ( int i = 0; i < n; i++ )
        {
            int s1 = 0, s2 = 0;
            for ( int j = i; j < n; j++ )
            {
                s1 += a1[j];
                s2 += a2[j];
                if ( s1 == s2 ) ans = max(ans, j - i + 1);
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}