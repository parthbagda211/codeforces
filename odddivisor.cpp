#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
int main(){
fastread();
int t;cin>>t;
while(t--){
    ll n;cin>>n;

    if(n & (n-1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
 
return 0;
}