#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, ans ="";
    vector<string> v;
    while ( cin >> s )
    {
        if ( ans == "" ) ans += s;
        else ans += " " + s;
        if ( ans[ans.size() - 1] == '.' || ans[ans.size() - 1] == '?' || ans[ans.size() - 1] == '!' )
        { 
            ans.pop_back();
            ans[0] = toupper(ans[0]);
            for ( int i = 1; i < ans.size(); i++ ) ans[i] = tolower(ans[i]);
            v.push_back(ans);
            ans = "";
        }
    }
    for ( auto i : v ) cout << i << endl;
    return 0;
}