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
    string a,b;cin>>a>>b;
    int n1 = a.size();
    int n2 = b.size();
    int lcm = n1*n2/__gcd(n1,n2);
    string ans1,ans2;
    for(int i=0;i<lcm/n1;i++) ans1+=a;
    for(int i=0;i<lcm/n2;i++) ans2+=b;
    if(ans1==ans2){
        P ans1 en;
    }
    else{
        P -1 en;
    }
}
return 0;
}