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
ll n,m;cin>>n>>m;
ll in=1,time=0;
for(int i=0;i<m;i++){
    int pp ;cin>>pp;


    if(pp>=in){
        time += pp-in;
    }
    else{
        time+= n-(in-pp);
    }
    in=pp;

}

P time en;
return 0;
}