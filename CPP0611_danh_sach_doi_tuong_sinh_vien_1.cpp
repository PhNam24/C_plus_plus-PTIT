#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define endl '\n';
#define ll long long

using namespace std;

int cnt = 1;

class SinhVien
{
    private : 
        string ten, lop;
        int msv, d, m, y;
        double p;
    public :
        friend istream &operator >> ( istream &is, SinhVien &a )
        {
            is.ignore();
            a.msv = cnt++;
            getline(is, a.ten);
            cin >> a.lop;
            scanf ("%d/%d/%d", &a.d, &a.m, &a.y);
            cin >> a.p;
            return is;
        }
        friend ostream &operator << ( ostream &os, SinhVien &a )
        {
            printf("B20DCCN%03d ", a.msv);
            cout << a.ten << " " << a.lop << " ";
            printf ("%02d/%02d/%04d ", a.d, a.m, a.y);
            cout << fixed << setprecision(2) << a.p << endl;
            return os;
        } 
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}