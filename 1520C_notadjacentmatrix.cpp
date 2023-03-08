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
int t;cin>>t;
while(t--){
    int n;cin>>n;

    if(n==1){
        P 1 en;
    }
    else if(n==2){
        P -1 en;
    }
    else{
        int cc=0,tt=0;
        for(int i=1;i<=n*n;i++){
            if(!(i&1)){
                cout << i << " " ;


                cc++;

            if(cc==n){
                cc=0;
                cout <<endl;
            }
            }
            

        }

        for(int i=1;i<=n*n;i++){
            if((i&1)){
                cout << i << " " ;

                   cc++;

            if(cc==n){
                cc=0;
                cout <<endl;
            }
            }
        }

    }
}
return 0;
}