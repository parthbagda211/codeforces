#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;cin>>s;
    int n = s.size();
    string ans;
    ans+=toupper(s[0]);
    ans+=s.substr(1,1+n);

    cout << ans << endl;
}