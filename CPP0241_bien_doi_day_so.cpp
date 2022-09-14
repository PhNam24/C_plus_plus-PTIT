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
        int a[n];
        for ( int &i : a ) cin >> i;
        int l = 0, r = n - 1;
        int cnt = 0;
        while (l < r)
        {
            if ( a[l] == a[r] )
            {
                l++;
                r--;
            }
            else 
            {
                if ( a[l] < a[r] )
                {
                    l++;
                    a[l] += a[l - 1];
                    cnt++;
                }
                else 
                {
                    r--;
                    a[r] += a[r + 1];
                    cnt++;
                }
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}