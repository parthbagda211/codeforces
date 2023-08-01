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
#define vll vector<ll>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
int main(){
fastread();
  int n;
    cin >> n;

    int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / r] << endl;
return 0;
}