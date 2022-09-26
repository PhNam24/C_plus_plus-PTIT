#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

struct SinhVien 
{
    string name, lop;    
    int ngay, thang, nam;
    float diem;
};

void nhap (SinhVien &a)
{
    getline(cin, a.name);
    getline(cin, a.lop);
    scanf ("%d/%d/%d", &a.ngay, &a.thang, &a.nam);
    cin >> a.diem;
}

void in (SinhVien a)
{
    cout << "B20DCCN001 " << a.name << " " << a.lop << " ";
    printf ("%.2d/%.2d/%d ", a.ngay, a.thang, a.nam);
    cout << fixed << setprecision(2) << a.diem;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}