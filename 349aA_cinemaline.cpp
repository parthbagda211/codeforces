#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
int main(){
fastread();
int n;cin>>n;
vi v(n);

for(int i=0;i<n;i++){
    cin>>v[i];

}

int twofive=0,fivezero=0,hund=0,c=1;
for(int i=0;i<n;i++){
     if(v[i]==25){
        twofive++;
     }
     else if(v[i]==50){
       

        if(twofive<1){
            c=0;
            break;
           
        }else{
             twofive--;
             fivezero++;
        }

     }else if(v[i]==100){
          if(twofive>=1 and fivezero>=1){
            twofive--;
            fivezero--;
         
          }else if(twofive>=3){
               twofive-=3;
          }else{
            c=0;
            break;
          }
     }



}

if(c==1){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}


return 0;
}