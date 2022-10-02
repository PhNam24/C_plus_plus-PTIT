#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int check (string s)
{
    for ( int i = 0; i < s.size(); i++ )
    {
        if ( s[i] != s[s.size() - 1 - i] ) return 0;
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
        string s, s1;
        cin >> s;
        for ( int i = 0; i < s.size(); i++ )
        {
            s[i] = tolower(s[i]);
            if ( s[i] == 'a' || s[i] == 'b' || s[i] == 'c' ) s1.push_back('2');
            if ( s[i] == 'd' || s[i] == 'e' || s[i] == 'f' ) s1.push_back('3');
            if ( s[i] == 'g' || s[i] == 'h' || s[i] == 'i' ) s1.push_back('4');
            if ( s[i] == 'j' || s[i] == 'k' || s[i] == 'l' ) s1.push_back('5');
            if ( s[i] == 'm' || s[i] == 'n' || s[i] == 'o' ) s1.push_back('6');
            if ( s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's') s1.push_back('7');
            if ( s[i] == 't' || s[i] == 'u' || s[i] == 'v' ) s1.push_back('8'); 
            if ( s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z') s1.push_back('9'); 
        }
        if ( check(s1) ) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}