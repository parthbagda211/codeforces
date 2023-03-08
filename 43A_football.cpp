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
int n;cin>>n;
string s;
map<string,int>mp;
while(n--){
cin>>s; 
mp[s]++;

}
int mx = INT_MIN;
for(auto it:mp){
    mx = max(mx,it.second);
}
for(auto it:mp){
    if(it.second==mx){
        cout << it.first << endl;
    }
}

return 0;
}