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
ll n,s;cin>>s>>n;
pair<int,int>a[1000];
for(int ll i=0;i<n;i++){
	cin>>a[i].first>>a[i].second;
}
int c=1;
sort(a,a+n);
//sort(yi.begin(),yi.end());
for(int ll i=0;i<n;i++){
	if(s<=a[i].first){
		c=0;
		break;
	}
	else{
		s+=a[i].second;
	}
}

// for(int i=0;i<n;i++){
// 	cout << xi[i] << " ";
// }
if(c==0){
	cout << "NO" << endl;
}
else{
	cout << "YES"<< endl;
}


return 0;
}