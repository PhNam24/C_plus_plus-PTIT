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
        int n, x;
        cin >> n >> x;
        int a[n];
        for ( int &i : a ) cin >> i;
        int check = -1;
        sort(a, a + n);
        for ( int i : a )
        {
            if (binary_search(a, a + n, i + x))
            {
                check = 1;
                break;
            }
        }
        cout << check;
        cout << endl;
    }
    return 0;
}