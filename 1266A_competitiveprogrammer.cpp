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
    string s;cin>>s;
    int n = s.size();
    int even=0,zero=0,sum=0;

    for(int i=0;i<n;i++){
        int tt = s[i]-'0';
        sum+=tt;

        if(tt==0){
            zero++;
        }
        if(tt%2==0){
            even++;
        }
    }


    if((sum%3==0 and zero>0) and even>=2){
        cout << "red" << endl;
    }
    else
    {
        cout << "cyan" << endl;
    }

}
return 0;
}