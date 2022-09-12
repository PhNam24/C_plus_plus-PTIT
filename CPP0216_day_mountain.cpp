#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int check ( int a[], int l, int r )
{
    int idx = -1;
    for ( int i = l; i < r; i++ )
    {
        if ( a[i] > a[i+1] ) 
        {
            idx = i;
            break;
        }
    }
    if ( idx > -1 ) 
    {
        for ( int i = idx; i < r; i++ ) 
        {
            if ( a[i] < a[i+1] ) return 0;
        }
    }
    return 1;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n, l, r;
        cin >> n;
        int a[n];
        for ( int &i : a ) cin >> i;
        cin >> l >> r;
        if ( check(a ,l ,r) ) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}