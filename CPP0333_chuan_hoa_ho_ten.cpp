#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
   string s, s1;
    getline(cin, s);
    for ( int i = 0; i < s.size(); i++ )
    {
        s[i] = tolower(s[i]);
    }
    vector<string> v;
    stringstream ss(s);
    while(ss >> s1)
    {
        s1[0] = toupper(s1[0]);
        v.push_back(s1);
    }
    for ( int i = 0; i < v.size() - 2; i++ )
    {
        cout << v[i] << " ";
    }
    for ( int i = 0; i < v[v.size() - 1].size(); i++ )
    {
        v[v.size() - 1][i] =toupper(v[v.size() - 1][i]);
    }
    cout << v[v.size() - 2] << ", " << v[v.size() - 1];
    return 0;
}