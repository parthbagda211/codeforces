#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
vi dfs(vii&vt,int st,int end){
    int v = vt.size();
    vi ans;
   if(st==end){
    ans.pb(st);
    return ans;
   }
 vector<bool>vis(v,false);
 vis[st]=true;
 for(auto it : vt[st]){
    if(st==it){
        continue;
    }

    if(!vis[it]){
        ans = dfs(vt,it,end);

        if(ans.size()!=0){
            ans.pb(st);
            return ans;
        }
    }
 }

 return {0};
}
int main(){
fastread();
int v,e;cin>>v>>e;
vii vt(v);
FOR(i,0,e){
    int x,y;cin>>x>>y;

    vt[x].pb(y);
    vt[y].pb(x);
}
int st,end;
cin>>st>>end;
vi path = dfs(vt,st,end);
if(path.empty()){
    cout << "NO PATH FOUND" << endl;
}
else{
    for(auto it : path){
        cout << it << " ";
    }cout << endl;
}
return 0;
}