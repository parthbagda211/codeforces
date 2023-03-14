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
    int n;cin>>n;
    n = n/2;
    if(n&1){
        cout << "NO"<<endl;
    }
    else{
        cout << "YES" << endl;
        for(int i=1;i<=n;i++){
            cout << i*2 << " ";
        }
        for(int i=1;i<n;i++){
            cout << i*2 -1 << " ";
        }

        cout << 3*n -1 << endl;
    }
}
return 0;
}