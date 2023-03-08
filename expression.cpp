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
 int a,b,c;cin>>a>>b>>c;
// if(a==1 or b==1 or c==1){
//  int arr[3];
//  arr[0]=a;
//  arr[1]=b;
//  arr[2]=c;
//  sort(arr,arr+3);
//  P arr[2]*(arr[0]+arr[1]) en;

// }else{
//     P a*b*c en;
// }

int ans = a+b+c;
ans = max(ans,(a+b)*c);
ans = max(ans,a*b*c);
ans = max(ans,a*(b+c));

P ans en;

// int n=3;
// vector<int>vt(n);
// for(int i=0;i<n;i++){
// 	cin>>vt[i];
// }
// sort(vt.begin(),vt.end());
// if(vt[0]==1 or vt[1]==1 or vt[2]==1){
// cout << max(vt[2] * (vt[0]+vt[1]),vt[0]+vt[1]+vt[2])  << endl;
// }
// else{
// 	cout << vt[0]*vt[1]*vt[2] << endl;
// }
return 0;
}