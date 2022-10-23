#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define endl '\n';
#define ll long long

using namespace std;

int cnt = 1;

string chuanHoa ( string s );

class SinhVien
{
    private : 
        string ten, lop;
        int msv, d, m, y;
        double p;
    public :
        friend bool cmp ( SinhVien a, SinhVien b);
        friend istream &operator >> ( istream &is, SinhVien &a )
        {
            scanf ("\n");
            a.msv = cnt++;
            getline(is, a.ten);
            a.ten = chuanHoa(a.ten);
            cin >> a.lop;
            scanf ("%d/%d/%d", &a.d, &a.m, &a.y);
            cin >> a.p;
            return is;
        }
        friend ostream &operator << ( ostream &os, SinhVien &a )
        {
            printf("B20DCCN%03d ", a.msv);
            os << a.ten << " " << a.lop << " ";
            printf ("%02d/%02d/%04d ", a.d, a.m, a.y);
            os << fixed << setprecision(2) << a.p << endl;
            return os;
        } 
};

string chuanHoa (string s)
{
    string s1, ans;
    stringstream ss(s);
    while(ss >> s1)
    {
        s1[0] = toupper(s1[0]);
        for ( int i = 1; i < s1.size(); i++ )
        {
            s1[i] = tolower(s1[i]); 
        }
        ans += s1 + " ";
    }
    ans.pop_back();
    return ans;
}

bool cmp ( SinhVien a, SinhVien b )
{
    return a.p > b.p;
}

void sapxep ( SinhVien a[], int n )
{
    sort(a, a + n, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}