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
int n,m;cin>>n>>m;
map<string,string>mp;
for(int i=0;i<m;i++){
    string a,b;
    cin>>a>>b;
    mp[a]=b;
}
for(int i=0;i<n;i++){
    string x;cin>>x;
    string y;
    y=mp[x];

    if(y.size()<x.size()){
        cout << y << " ";
    }else{
        cout << x<< " ";
    }
}
return 0;
}