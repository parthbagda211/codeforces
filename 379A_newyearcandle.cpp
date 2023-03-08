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
int a,b;cin>>a>>b;
int h=a,m,d;

while(a>=b){
    d =  a/b ;
    h+=d;
    m = a%b;
    a = d+m;
   

}
cout << h << endl;

return 0;
}