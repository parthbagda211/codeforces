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
    ll n;cin>>n;
    vector<int>vt(n);
    ll sum=0;
    bool odd = false, even = false;
    for(auto it : vt){
        cin>>it;
        sum+=it;
        odd |= it % 2 != 0;
			even |= it % 2 == 0;
    }
    // cout << odd << " " << even << endl;
    // cout << endl;
    if(sum&1 || (odd and even)){
        P "YES" en;
    }
    else{
        P "NO" en;
    }
}

return 0;
}