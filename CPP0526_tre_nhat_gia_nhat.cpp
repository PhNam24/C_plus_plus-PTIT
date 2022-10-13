#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct Data
{
    string name, d, m, y;
};

bool cmp(Data &a, Data &b)
{
    if(a.y > b.y) return 1;
    if(a.y < b.y) return 0;
    if(a.m > b.m) return 1;
    if(a.m < b.m) return 0;
    if(a.d > b.d) return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    Data a[n];
    for ( int i = 0;i < n; i++ )
    {
        cin >> a[i].name;
        string s;
        cin >> s;
        stringstream ss(s);
        getline(ss, a[i].d, '/');
        getline(ss, a[i].m, '/');
        getline(ss, a[i].y, '/');
    }
    sort(a, a + n, cmp);
    cout << a[0].name << endl << a[n - 1].name;
    return 0;
}