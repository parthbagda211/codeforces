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
    string s;cin>>s;
    // stack<char>st;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='('){
    //         st.push(s[i]);

    //     }
    //  else {
	// 		while(!st.empty() and st.top()!='('){
	// 			st.pop();

	// 		}
	// 		if(!st.empty()){
	// 			st.pop();
	// 		}
	// 	}

    // }
    

    // cout << st.size()<<endl;


//******************************************************************************//

int ans=0;
int bal=0;
for(int i=0;i<n;i++){
    if(s[i]=='('){
        bal++;
    }
    else{
        bal--;

        if(bal<0){
            bal=0; ans++;
        }
    }
}

cout << ans << endl;
}
return 0;
}