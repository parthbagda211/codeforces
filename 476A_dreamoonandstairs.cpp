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
int n,m;
int x;
cin>>n>>m;


if(m>n){
    x=-1;
}
else{
    if(n%2==0){
        x = n/2;
    }
    else{
        x = (n/2) +1;
    }

    while(x%m!=0){
    x++;
}

}


P x en;

return 0;
}