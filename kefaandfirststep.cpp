#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 



 int n;cin>>n;
int l=1,ml=1;
int input[n];
for(int i=0;i<n;i++){ 
    cin>>input[i];
}
for(int i=0;i<n;i++){
    if(i>0){
        if(input[i]>=input[i-1]){
            l++;
            ml = max(ml,l);
        }
        else{
            l=1;
        }
    }
}
cout << ml << endl;
return 0;
}