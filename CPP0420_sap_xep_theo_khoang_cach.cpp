#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int x;

bool cmp(int a, int b)
{
    return abs(x - a) < abs(x - b);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n >> x;
        int a[n];
        for ( int &i : a ) cin >> i;
        stable_sort(a, a + n, cmp);
        for ( int i : a ) cout << i << " ";
        cout << endl;
    }
    return 0;
}