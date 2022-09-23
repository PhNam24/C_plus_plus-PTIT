#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    string s, s1, s2;
    getline(cin, s);
    getline(cin, s1);
    stringstream ss(s);
    while(ss >> s2)
    {
        if ( s2 != s1 ) cout << s2 << " ";
    }
    return 0;
}
