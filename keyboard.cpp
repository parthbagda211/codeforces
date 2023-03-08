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
string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";


char ch;S ch;
string s; S s;
string ans;
if(ch=='R'){
    for(int i=0;i<s.size();i++){
       int idx = s1.find(s[i]);
       ans +=s1[idx-1];
    }

     
}
else{
for(int i=0;i<s.size();i++){
       int idx = s1.find(s[i]);
       ans +=s1[idx+1];
    }
}

P ans en;
return 0;
}