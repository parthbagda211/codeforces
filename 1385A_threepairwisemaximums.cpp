#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define $  >>
int main(){
fastread();
int t;cin>>t;
while(t--){
    vector<int>vt(3);
    for(int i=0;i<3;i++)
    {
        cin>>vt[i];
    }
    sort(vt.begin(),vt.end());

    if(vt[1]!=vt[2]){
        P "NO" en;
    }
    else{
        P "YES" en;
        cout << vt[0] << " " << vt[0] << " " << vt[2]  en;
    }
}
return 0;
}