#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int d = 0;

struct NhanVien
{
    string name, gender, birth, address, code, day;
};

void nhap(NhanVien &a)
{
    if ( d == 0 ) cin.ignore();
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.birth);
    getline(cin, a.address);
    getline(cin, a.code);
    getline(cin, a.day);
    d++;
}

void inds (NhanVien a[], int n)
{
    for ( int i = 0; i < n; i++ )
    {
        printf("%.5d ", i + 1);
        cout << a[i].name << " " << a[i].gender << " " << a[i].birth << " " << a[i].address << " " << a[i].code << " " << a[i].day << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}