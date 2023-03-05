#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int m,n;cin>>m>>n;
vector<int>vt(n);
for(int i=0;i<n;i++){
    cin>>vt[i];
}
sort(vt.begin(),vt.end());
int ln = vt[m-1]-vt[0];
for(int i=1;i<=n-m;i++){
    if (vt[i+m-1] - vt[i] < ln)
        {
            ln = vt[i+m-1] - vt[i];
        }
}
cout << ln << endl;
return 0;
}