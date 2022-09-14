#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    int b[n * n];
    for ( int &i : b ) cin >> i;
    sort(b , b + n * n);
    int a[n][n];
    int h1 = n, c1 = n, h2 = 0, c2 = 0, idx = 0;
    while( idx < n * n )
    {
        for ( int i = c2; i < c1; i++ )
        {
            a[h2][i] = b[idx];
            idx++;
        }
        for ( int i = h2 + 1; i < h1; i++ )
        {
            a[i][c1 - 1] = b[idx];
            idx++;
        }
        for ( int i = c1 - 2; i >= c2; i-- )
        {
            a[h1 - 1][i] = b[idx];
            idx++;
        }
        for ( int i = h1 - 2; i > h2; i-- )
        {
            a[i][c2] = b[idx];
            idx++;
            }
        h1--;
        c1--;
        h2++;
        c2++;
    }
    for ( int i = 0; i < n; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}