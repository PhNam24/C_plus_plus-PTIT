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
        map<int,int> d;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            if ( a[i] > 0 ) d[a[i]]++;
        }
        for ( int i = 1; i < 1000005 ; i++ )
        {
            if (!d[i])
            {
                cout << i;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}