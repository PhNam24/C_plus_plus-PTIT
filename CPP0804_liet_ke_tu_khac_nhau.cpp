#include <bits/stdc++.h>
#include <iostream>
#define test int t; cin >> t; while(t--)
#define endl '\n';
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream in("VANBAN.in");
    string s;
    set<string> ss;
    while(in >> s)
    {
        for ( int i = 0; i < s.size(); i++ ) s[i] = tolower(s[i]);
        ss.insert(s);
    } 
    for ( auto i : ss ) cout << i << endl;
    return 0;
}