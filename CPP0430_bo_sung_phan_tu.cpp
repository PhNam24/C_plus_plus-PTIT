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
        int n, cnt = 0;
        cin >> n;
        int a[n], b[100005] = {};
        int Min = 100005, Max = -1;
        for ( int &i : a )
        {
            cin >> i;
            b[i]++;
            Min = min(Min, i);
            Max = max(Max, i);
        }
        for ( int i = Min; i <= Max; i++ )
        {
            if ( !b[i] ) cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}