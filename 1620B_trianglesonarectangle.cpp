#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long w, h;
        cin>>w>>h;
        long long ans = 0;
        for(long long i=0; i<4; i++)
        {
            vector<long long> a;
            long long m;
            cin>>m;
            for(long long j=0; j<m; j++)
            {
                long long x;
                cin>>x;
                a.push_back(x);
            }
            ans = max(ans, (a.back() - a[0]) * (i<2 ? h : w));
        }
        cout<<ans<<endl;
    }
    return 0;
}
