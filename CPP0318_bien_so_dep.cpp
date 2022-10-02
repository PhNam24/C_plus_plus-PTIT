#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int check ( string s )
{
    string s1;
    set<char> ss;
    int tmp = 0;
    for ( int i = 5; i < s.size(); i++ )
    {
        if (isdigit(s[i]))
        {
            s1.push_back(s[i]);
            ss.insert(s[i]);
            if ( s[i] == '6' || s[i] == '8' ) tmp++;
        } 
    }
    if ( ss.size() == 1 ) return 1;
    if ( tmp == 5 ) return 1;
    if ( s1[0] == s1[1] && s1[1] == s1[2] && s1[3] == s1[4] ) return 1;
    int tmp1 = 1;
    for ( int i = 0; i < s1.size() - 1; i++ )
    {
        if ( s1[i] >= s1[i + 1] ) 
        {
            tmp1 = 0;
            break;
        }
    }
    if (tmp1) return 1;
    return 0;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        if (check(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}