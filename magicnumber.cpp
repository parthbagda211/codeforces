#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
string s;cin>>s;
bool ans = true;
for(int i=0;i<s.size();){
    if(s[i]=='1' and s[i+1]=='4' and s[i+2]=='4'){
        i+=3;
    }
    else if(s[i]=='1' and s[i+1]=='4'){
        i+=2;
    }
    else if(s[i]=='1'){
        i++;
    }
    else{
        ans=false;
        break;
    }

    
}

if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO"<<endl;
    }
return 0;
}