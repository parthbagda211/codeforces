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
int n;S n;
int s1(0),s2(0),s3(0);
while(n--){
    
    int a,b,c;
    cin>>a>>b>>c;
    s1+=a;
    s2+=b;
    s3+=c;

}
if(s1==0 and s2==0 and s3==0){
    P "YES" en;
}
else{
    P "NO" en;
}
return 0;
}