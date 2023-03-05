#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n;cin>>n;
string s;cin>>s;
int c1=0,c0=0;
c1 = count(s.begin(),s.end(),'1');
c0 = count(s.begin(),s.end(),'0');

cout << abs(c0-c1) << endl;
return 0;
}