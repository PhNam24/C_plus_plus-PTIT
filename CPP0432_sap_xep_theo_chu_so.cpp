#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int cmp (int a, int b)
{
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

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
        sort(a, a + n, cmp);
        for ( int i : a ) cout << i;
        cout << endl;
    }
    return 0;
}