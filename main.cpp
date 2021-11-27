#include <bits/stdc++.h>

// https://khmt.uit.edu.vn/wecode/truonganpn/assignment/30/122

using namespace std;

long long n;
vector<string> a = {"THAN","DAU","TUAT","HOI","TY'","SUU","DAN","MEO","THIN","TY.","NGO","MUI","THAN"};
vector<string> b = {"CANH","TAN","NHAM","QUY","GIAP","AT","BINH","DINH","MAU","KY","CANH"};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n;
    if (n>0) {
        cout<<b[n%10]<<" "<<a[n%12];
    }
    else {
        n*=-1;
//        cout<<(10-n%10+1)%10<<"\n"<<(12-n%12+1)%12;
        cout<<b[(10-n%10+1)%10]<<" "<<a[(12-n%12+1)%12];
    }
    return 0;
}
