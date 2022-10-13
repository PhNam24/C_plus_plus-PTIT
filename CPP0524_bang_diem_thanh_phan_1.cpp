#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

struct SinhVien 
{
    string msv, ten, lop;
    double p1, p2, p3;
};

void nhap( SinhVien &a )
{
    cin >> a.msv;
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.lop >> a.p1 >> a.p2 >> a.p3;
    cin.ignore();
}

bool cmp ( SinhVien a, SinhVien b )
{
    return a.msv < b.msv;
}

void in_ds(SinhVien a[], int n)
{
    for ( int i = 0; i < n; i++ )
    {
        cout << i + 1 << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].p1 << " " << fixed << setprecision(1) << a[i].p2 << " " << fixed << setprecision(1) << a[i].p3 << endl; 
    }
}

void sap_xep (SinhVien a[], int n)
{
    sort(a, a + n, cmp);
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}