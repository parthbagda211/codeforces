#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl;
int main(){
fastread();
int t;S t;
while(t--){
 ll n;S n;

 if(n%2==0 and n>=4){

    if(n%6==0) P n/6;

    else P n/6+1; 
    P " ";
    P n/4;  
 }
 else {
     P -1 ;
 }
 cout << endl;
}
return 0;
}