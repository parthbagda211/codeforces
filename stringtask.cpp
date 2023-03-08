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
string s ; S s;
int n=s.length();
string ans;
//transform(s.begin(),s.end(),::tolower)
for(int i=0;i<n;i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i'||s[i]=='o'||s[i]=='y'|| s[i]=='u'||s[i]=='A' || s[i]=='E' || s[i]=='I'||s[i]=='O'|| s[i]=='U'||s[i]=='Y'){
        continue;
    }
    else{
        ans.push_back('.');
        ans.push_back(tolower(s[i]));
    }
}
P ans en;
return 0;
}