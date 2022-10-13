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
        int n;
        cin >> n;
        int a[n];
        for ( int &i : a ) cin >> i;
        vector<int> v;
        int cnt0 = 0;
        for ( int i = 0; i < n; i++ )
        {
            if ( a[i] != 0 ) 
            {
                if ( a[i] == a[i+1] ) 
                {
                    a[i] *= 2;
                    a[i+1] = 0;
                }
                v.push_back(a[i]);
            }
            else cnt0++;
        }
        for ( int i : v ) cout << i << " ";
        while(cnt0--) cout << "0 ";
        cout << endl;
    }
    return 0;
}