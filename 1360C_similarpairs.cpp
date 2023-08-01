#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
void solve(){
    ll n;cin>>n;
    vll vt(n);
    ll odd=0,even=0;
    for(ll i=0;i<n;i++){
        cin>>vt[i];

        if(vt[i]%2==0){
            even++;
        }else{
            odd++;
        }

    }

    if(odd%2!=even%2){
        cout << "NO" << endl;
    }
    else {
        if(even%2==0){
            cout << "YES" << endl;
        }
         else{
            for(ll i=0;i<n;i++){
                for(ll  j = i+1;j<n;j++){
                    if(vt[i]%2!=vt[j]%2 and abs(vt[i]-vt[j])==1){
                        cout << "YES" << endl;
                        return ;
                    }
                }
            }
            cout << "NO" << endl;
         }
    }

}
int main(){
fastread();
int t;cin>>t;
while(t--){
    solve();
}
return 0;
}