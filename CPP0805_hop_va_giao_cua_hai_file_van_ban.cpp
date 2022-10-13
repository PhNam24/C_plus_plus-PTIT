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
    set<string> hop, ss1, ss2;
    string s;
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");
    while(in1 >> s) 
    {
        for ( int i = 0; i < s.size(); i++ ) s[i] = tolower(s[i]);
        hop.insert(s);
        ss1.insert(s);
    }
    in1.close();
    while(in2 >> s) 
    {
        for ( int i = 0; i < s.size(); i++ ) s[i] = tolower(s[i]);
        hop.insert(s);
        ss2.insert(s);
    }
    in2.close();
    for ( auto i : hop ) cout << i << " ";
    cout << endl;
    for ( auto i : ss1 )
    {
        if ( ss2.find(i) != ss2.end() ) cout << i << " ";
    }
    return 0;
}