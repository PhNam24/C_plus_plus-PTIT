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

bool cmp(pair<string,int> p1, pair<string,int> p2)
{
    if ( p1.first.size() > p2.first.size() ) return 1;
    else if ( p1.first.size() < p2.first.size() ) return 0;
         else 
         {
             return p1.first > p2.first;
         }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    map<string,int> m;
    string s;
    while(cin >> s)
    {
        if ( check(s) && s.size() > 1) m[s]++;
    }
    vector<pair<string,int> > v;
    for ( pair<string,int> i : m ) 
    {
        v.push_back({i.first, i.second});
    }
    sort(v.begin(), v.end(), cmp);
    for ( auto i : v ) cout << i.first << " " << i.second << endl;
    return 0;
}