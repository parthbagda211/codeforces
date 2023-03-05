#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 int n;cin>>n;
 int res = n/5;
 if(n%5!=0){
    res+=1;

 }
 cout << res << endl;
return 0;
}