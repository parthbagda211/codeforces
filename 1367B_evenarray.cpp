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
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
int main(){
fastread();
int t;cin>>t;
while(t--){
    int n;S n;
    vi vt(n);
    FOR(i,0,n){
        S vt[i];
    }
    int ans;
    int even=0,odd=0;
    

    
    FOR(i,0,n){
        if(vt[i]%2!=i%2){
if(i%2==0){
            even++;
        }
        else if(i%2!=0){
           odd++;
        }
        }
        
    }
   //cout << even << " " << odd << endl;

   if(odd!=even){
    cout << -1 << endl;
   }
   else{
    cout << even << endl;
   }
}
return 0;
}