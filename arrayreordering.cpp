#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>vt(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    sort(vt.begin(), vt.end(), [](int x, int y) {
      return x % 2 < y % 2;
    });
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(vt[i],2*vt[j])>1){
                c++;
            }
        }
    }
    cout << c << endl;
}
return 0;
}