#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    string s;
    cin >> s;
    for ( int i = 0; i < s.size(); i++ )
    {
        s[i] = tolower(s[i]);
        if ( s[i] == 'a' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'y' ) continue;
        cout << "." << s[i];
    }
    return 0;
}