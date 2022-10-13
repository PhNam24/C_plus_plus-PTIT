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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        int idx1 = 0, idx2 = 0, idx3 = 0;
        for ( int &i : a ) cin >> i;
        for ( int &i : b ) cin >> i;
        for ( int &i : c ) cin >> i;
        multiset<int> s;
        while ( idx1 < n1 && idx2 < n2 && idx3 < n3 )
        {
            if ( a[idx1] == b[idx2] && b[idx2] == c[idx3] )
            {
                s.insert(a[idx1]);
                idx1++;
                idx2++;
                idx3++;
            }
            else if ( a[idx1] < b[idx2] ) idx1++;
            else if ( b[idx2] < c[idx3] ) idx2++;
            else idx3++;
        }
        if ( s.size() )
        {
            for ( int i : s ) cout << i << " ";
        }
        else cout << -1;
        cout << endl;
    }
    return 0;
}