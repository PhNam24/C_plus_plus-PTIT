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
    string s[n];
    cin.ignore();
    for ( int i = 0; i < n; i++ )
    {
        getline(cin , s[i]);
    }
    int cnt = 0;
    sort(s, s + n);
    for ( int i = 0; i < n - 1; i++ )
    {
        if (s[i] != s[i + 1]) cnt++;
    }
    cout << cnt + 1;
    return 0;
}