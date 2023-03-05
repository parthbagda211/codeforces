#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){

    
int n;cin>>n;
string s;
for(int i=1;i<=9 ;i++){
    s +=to_string(i);
    do{
        int sum=0;
        int num = stoi(s);
        while(num>0){
            sum+=num%10;
            num /=10;

        }
        if(sum==n){
            cout << n << endl;
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
    s ="";
}
cout << -1 << endl;
}
return 0;
}