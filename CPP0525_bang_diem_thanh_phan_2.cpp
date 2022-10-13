#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

struct SinhVien 
{
    string msv, ten, lop;
    double p1, p2, p3;
};

bool cmp ( SinhVien &a, SinhVien &b )
{
    return a.ten < b.ten;
}

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++) 
    {
    	cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        cin >> a[i].p1 >> a[i].p2 >> a[i].p3;
	}
    sort(a, a + n, cmp);
    for ( int i = 0; i < n; i++ )
    {
        cout << i + 1 << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].p1 << " " << fixed << setprecision(1) << a[i].p2 << " " << fixed << setprecision(1) << a[i].p3 << endl; 
    }
    return 0;
}