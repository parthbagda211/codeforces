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
string s;cin>>s;
string t = s;
reverse(s.begin(),s.end());
cout << t+s << endl;
return 0;
}