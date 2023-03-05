#include "bits/stdc++.h"
using namespace std;
int main(){
	
	int n=5;
	int mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
    int midx=2,midy=2;
    int onex,oney;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(mat[i][j]==1){
				onex=i;
				oney=j;
			}
		}
		
	}

	cout << abs(midx-onex)+abs(midy-oney) << endl;

	
	
	
}