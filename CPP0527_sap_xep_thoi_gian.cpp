#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct nguoi
{
    int h, m, s;
};

bool cmp (nguoi &a, nguoi &b)
{
    if ( a.h < b.h ) return 1;
    if ( a.h > b.h ) return 0;
    if ( a.m < b.m ) return 1;
    if ( a.m > b.m ) return 0;
    if ( a.s < b.s ) return 1;
    return 0;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    nguoi a[n];
    for ( int i = 0; i < n; i++ )
    {
       cin >> a[i].h >> a[i].m >> a[i].s;
    }
    sort (a, a + n, cmp);
     for ( int i = 0; i < n; i++ )
    {
       cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
    }
    return 0;
}