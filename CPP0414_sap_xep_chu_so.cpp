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
        string s;
        cin.ignore();
        getline(cin, s);
        int b[10] = {};
        for ( int i = 0; i < s.size(); i++ )
        {
            b[s[i]- '0']++;
        }
        for ( int i = 0; i < 10; i++ )
        {
            if ( b[i] ) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}