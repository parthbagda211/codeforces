#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    int sum=0,ans=0,c=0;
    for(int i=0;i<n;i++){
cin>>arr[i];
sum+=arr[i];
    }
    sum = sum/2;

    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
       ans  +=arr[i];
       c++;
       if(ans>sum){
        break;
       }
    }
    cout << c << endl;
}