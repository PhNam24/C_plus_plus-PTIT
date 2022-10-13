#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define endl '\n';
#define ll long long

using namespace std;

bool cmp( pair<int, int> a, pair<int, int> b)
{
    if ( a.first != b.first ) return a.first < b.first;
    else return a.second > b.second;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int a[n], b[100005] = {};
        int Max = -1e9;
        for ( int &i : a )
        {
            cin >> i;
            Max = max(Max, i);
            b[i]++;
        }
        vector<pair<int, int>> v;
        for ( int i = 0; i <= Max; i++ )
        {
            if ( b[i] ) v.push_back({b[i], i});
        }
        sort(v.begin(), v.end(), cmp);
        for ( int i = v.size() - 1; i >= 0; i-- )
        {
            while(v[i].first--) cout << v[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}