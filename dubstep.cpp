#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
string s;cin>>s;
int n=s.size();
bool tt=true;
for(int i=0;i<n;i++){
    if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
        i+=2;

        if(!tt){
            cout << " ";
        }
        continue;
    }

        else{
            tt=false;
            cout << s[i];
        }



      
       
    }
   



return 0;
}