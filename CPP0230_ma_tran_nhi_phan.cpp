#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    int a[n][3];
    for ( int i = 0; i < n; i++ )
    {
        for ( int j = 0; j < 3; j++ )
        {
            cin >> a[i][j];
        }
    }
    for ( int i = 0; i < n; i++ )
    {
        int tmp1 = 0, tmp2 = 0;
        for ( int j = 0; j < 3; j++ )
        {
            cin >> a[i][j];
            if ( a[i][j] == 1 ) tmp1++;
            else tmp2++;
        }
        if ( tmp1 > tmp2 ) cnt++;
    }
    cout << cnt;
    return 0;
}