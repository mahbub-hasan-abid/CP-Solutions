//28april2023(10:47PM)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for( i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vcd(v) vector<ll> (v);
#define vcsort(vc) sort(v.begin(), v.end());
#define vcsortg(vc) sort(v.begin(), v.end(), greater<int>());
#define getintovc(vc,n) { while(n--) {long long yyy; cin>>yyy; vc.push_back(yyy);}}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(vc) for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";
#define ff first
#define ss second
#define faster; {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
 
int main()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,q,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>q;
    vector<pair<ll,ll>>vc;
    while(q--)
    {
        cin>>a>>b;
        vc.push_back({a,b});
    }
    sort(all(vc));
    x=vc[0].first;y=vc[0].second;
    fl(i,1,vc.size())
    {
        if(vc[i].first>x&&vc[i].second<y)
        ans++;
        else
        {
             x=vc[i].first;y=vc[i].second;
        }
 
    }
    cout<<ans<<endl;
 
 
 
 
  //main();
}