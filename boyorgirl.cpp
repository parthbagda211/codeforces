#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 string s;cin>>s;
 sort(s.begin(),s.end());
 auto t = unique(s.begin(),s.end());
 string tt = string(s.begin(),t);
 int m = tt.size();

 if(m%2==0){
cout << "CHAT WITH HER!"<<endl;
 }
 else{
    cout << "IGNORE HIM!"<<endl;
 }

return 0;
}