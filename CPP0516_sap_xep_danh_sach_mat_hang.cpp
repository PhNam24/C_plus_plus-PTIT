#include <bits/stdc++.h>
#define test int t; cin >> t; cin.ignore(); while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct hang
{
    int stt;
    string name, type;
    double buy, sell;
};

int cmp ( hang a, hang b )
{
    return (a.sell - a.buy) > (b.sell - b.buy);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    hang a[n];
    cin.ignore();
    for ( int i = 0; i < n; i++ )
    {
        getline(cin, a[i].name);
        getline(cin, a[i].type);
        cin >> a[i].buy >> a[i].sell;
        cin.ignore();
        a[i].stt = i + 1;
    }
    sort(a, a + n, cmp);
    for ( int i = 0; i < n; i++ )
    {
        cout << a[i].stt << " " << a[i].name << " " << a[i].type << " " << fixed << setprecision(2) << a[i].sell - a[i].buy << endl;
    }
    return 0;
}