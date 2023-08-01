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
int main(){
fastread();
int t;cin>>t;
while(t--){
    int n,x;cin>>n>>x;
     vi v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     sort(v.begin(),v.end());
    int ans=0;
     double sum =0.0;
     double avg=0.0;
     for(int i=n-1;i>=0;i--){
         sum += v[i];

         avg = sum/(double(n-i));

         if(avg>=x) 
         {
            ans++;
         }
         else{
            break;
         }

     }
     cout << ans << endl;
}
return 0;
}