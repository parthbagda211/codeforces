#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 
string s;cin>>s;
int n = s.size();
bool ans = false;
for(int i=0;i<n;i++){
    if(s[i]>=33 and s[i]<=126){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
            ans =true;
        }
    }
}

if(ans){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
return 0;
}